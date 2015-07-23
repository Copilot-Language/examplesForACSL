#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "copilot-sbv-codegen/copilot.h"

#define maxPlanes 1000

size_t numberOfPlanes = 0;
double HDG[maxPlanes];    //0 to 359
double TAS[maxPlanes];    //kts
double Lat[maxPlanes];    //+-90
double Long[maxPlanes];   //+-90
double Alt[maxPlanes];    //ft
double VSPD[maxPlanes];   //kts
int ICAO24[maxPlanes];    //24 bits id code, on the 25 lowest bits, the 25th bit is equal to 1 if undefined value, 0 if defined.

bool awayPlane[maxPlanes];

bool WCVtau[maxPlanes][maxPlanes];
bool WCVtcpa[maxPlanes][maxPlanes];
bool WCVtaumod[maxPlanes][maxPlanes];
bool WCVtep[maxPlanes][maxPlanes];

bool WCVtepactivated;
bool WCVtaumodactivated;
bool WCVtcpaactivated;
bool WCVtauactivated;


double ownship_longitude;
double ownship_latitude;
double intruder_longitude;
double intruder_latitude;
double ownship_trueairspeed;
double ownship_heading;
double intruder_trueairspeed;
double intruder_heading;
double ownship_altitude_ft;
double intruder_altitude_ft;
double ownship_vertical_speed;
double intruder_vertical_speed;



void alert_WCVtep()
{
    printf("\tWCVtep activated\n");
    WCVtepactivated = true;
}
void alert_WCVtaumod()
{ 
    printf("\tWCVtaumod activated\n");
    WCVtaumodactivated = true;
}
void alert_WCVtcpa()
{
    printf("\tWCVtcpa activated\n");
    WCVtcpaactivated = true;
}
void alert_WCVtau()
{
    printf("\tWCVtau activated\n");
    WCVtauactivated = true;
}

/*Compare strictly more than 24 bits, because there is also the value undefined corresponding to -1
*/
bool cmpicao(const int i, const int j)
{
    return (i&0x1FFFFFF) == (j&0x1FFFFFF);
}

int main(int argc, char ** argv)
{
    int icao24msg;
    int intention;
    for(;;)
    {
        printf("BEGINNING OF THE LOOP\n");
away:
        //SAMPLEHERE
	scanf("%d", &intention);
        scanf("%d", &icao24msg);
        
        //PLANE ENTERING CONTROL AREA
        if(intention == 0) //TODO insert condition
        {
            //CRITICAL SECTION HERE
            size_t i;
            for(i=0; i< numberOfPlanes;i++)
            {
                if (awayPlane[i]) continue;
                if (cmpicao(ICAO24[i],icao24msg)) goto away;
            }
            ICAO24[numberOfPlanes] = icao24msg;
            awayPlane[numberOfPlanes] = false;
            numberOfPlanes++;
            printf("%d added\n",icao24msg);
        }
        //PLANE LEAVING CONTROL AREA
        if(intention == 1)
        {
            //CRITICAL SECTION HERE
            size_t i = 0;
            for(i = 0 ; i < numberOfPlanes;i++)
            {
                if(awayPlane[i]) continue;
                if(cmpicao(ICAO24[i],icao24msg)) awayPlane[i] = true;
            }
            printf("%d deleted\n",icao24msg);
        }

        //PLANE UPDATING ITS COORDINATES
        if(intention == 2) //TODO insert condition
        {
            printf("UPDATING Lat Long Tas Hdg Alt VSPD\n");
            double longmsg, latmsg, tasmsg, hdgmsg, altmsg, vspdmsg;
            //MSG format : Lat Long Tas Hdg Alt VSPD
            scanf("%lf", &latmsg);
            scanf("%lf", &longmsg);
            scanf("%lf", &tasmsg);
            scanf("%lf", &hdgmsg);
            scanf("%lf", &altmsg);
            scanf("%lf", &vspdmsg);
            //CRITICAL SECTION
            size_t i = maxPlanes + 5,j, iplane = maxPlanes + 5;
            for(iplane= 0 ; iplane < numberOfPlanes;iplane++)
            {
                if(awayPlane[iplane]) continue;
                if(cmpicao(ICAO24[iplane],icao24msg)) i = iplane;
            }
            if(i >= numberOfPlanes) goto away;

            Long[i] = longmsg;
            Lat[i] = latmsg;
            TAS[i] = tasmsg;
            HDG[i] = hdgmsg;
            Alt[i] = altmsg;
            VSPD[i] = vspdmsg;


            ownship_latitude = latmsg;
            ownship_longitude = longmsg;
            ownship_trueairspeed = tasmsg;
            ownship_heading = hdgmsg;
            ownship_altitude_ft = altmsg;
            ownship_vertical_speed = vspdmsg;
            
            for(j = 0 ; j < numberOfPlanes;j++)
            {
                if(awayPlane[j] || i == j) continue;
                WCVtepactivated = false;
                WCVtaumodactivated = false;
                WCVtcpaactivated = false;
                WCVtauactivated = false;
                intruder_latitude = Lat[j];
                intruder_longitude = Long[j];
                intruder_trueairspeed = TAS[j];
                intruder_heading = HDG[j];
                intruder_altitude_ft = Alt[j];
                intruder_vertical_speed = VSPD[j];

                printf("Calling step with \n\t%d : %lf %lf %lf %lf %lf %lf\n\t%d : %lf %lf %lf %lf %lf %lf\n", ICAO24[i], ownship_latitude, ownship_longitude, ownship_trueairspeed, ownship_heading, ownship_altitude_ft, ownship_vertical_speed, ICAO24[j], intruder_latitude, intruder_longitude, intruder_trueairspeed, intruder_heading, intruder_altitude_ft, intruder_vertical_speed); fflush(stdout);
                step();
                printf("\trel : %lf %lf %lf %lf %lf %lf %lf", sx ,sy, sz, vx, vy, vz, tau);

                if(WCVtepactivated) WCVtep[i][j] = true; else WCVtep[i][j] = false;
                if(WCVtcpaactivated) WCVtcpa[i][j] = true; else WCVtcpa[i][j] = false;
                if(WCVtauactivated) WCVtau[i][j] = true; else WCVtau[i][j] = false;
                if(WCVtaumodactivated) WCVtaumod[i][j] = true; else WCVtaumod[i][j] = false;
                
            }
            printf("%d UPDATED\n",icao24msg);
        }
        printf("BEGINNING OF DISPLAY %d*%d\n",numberOfPlanes,numberOfPlanes);
        size_t i, j;
        for( i = 0; i < numberOfPlanes;i++)
        {
            if(awayPlane[i]) continue;
            for(j = 0; j < numberOfPlanes;j++)
            {
                if(awayPlane[j]) continue;
                if(WCVtau[i][j]) printf("\a#"); 
                else if(WCVtcpa[i][j]) printf("*");
                else if(WCVtaumod[i][j]) printf("|");
                else if(WCVtep[i][j]) printf("+"); 
                else printf(".");
            }
            printf("\n");
        }
        printf("END OF DISPLAY %d*%d\n",numberOfPlanes,numberOfPlanes);
        printf("\n");
    }
    return 0;
}
