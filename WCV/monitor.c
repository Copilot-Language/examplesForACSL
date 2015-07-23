#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "copilot-sbv-codegen/copilot.h"

#define maxPlanes 1000

size_t numberOfPlanes = 0;

double Lat[maxPlanes];    //+-90
double Long[maxPlanes];   //+-90
double Alt[maxPlanes];    //ft
double VX[maxPlanes];     //m/s
double VY[maxPlanes];     //m/s
double VZ[maxPlanes];     //m/s
long long int ICAO24[maxPlanes];    //24 bits id code, on the 25 lowest bits, the 25th bit is equal to 1 if undefined value, 0 if defined.

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
double ownship_altitude_ft;
double intruder_altitude_ft;
double ownship_vx;
double ownship_vy;
double ownship_vz;
double intruder_vx;
double intruder_vy;
double intruder_vz;



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
bool cmpicao(const long long int i, const long long int j)
{
    return (i&0x1FFFFFFll) == (j&0x1FFFFFFll);
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
            printf("UPDATING Lat Long Alt vx vy vz\n");
            double longmsg, latmsg, altmsg, vxmsg, vymsg, vzmsg;
            //MSG format : Lat Long Alt vx vy vz
            scanf("%lf", &latmsg);
            scanf("%lf", &longmsg);
            scanf("%lf", &altmsg);
            scanf("%lf", &vxmsg);
            scanf("%lf", &vymsg);
            scanf("%lf", &vzmsg);
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
            Alt[i] = altmsg;
            VX[i] = vxmsg;
            VY[i] = vymsg;
            VZ[i] = vzmsg;




            ownship_latitude = latmsg;
            ownship_longitude = longmsg;
            ownship_altitude_ft = altmsg;
            ownship_vx = vxmsg;
            ownship_vy = vymsg;
            ownship_vz = vzmsg;
            

            for(j = 0 ; j < numberOfPlanes;j++)
            {
                if(awayPlane[j] || i == j) continue;
                WCVtepactivated = false;
                WCVtaumodactivated = false;
                WCVtcpaactivated = false;
                WCVtauactivated = false;
                intruder_latitude = Lat[j];
                intruder_longitude = Long[j];
                intruder_altitude_ft = Alt[j];
                intruder_vx = VX[j];
                intruder_vy = VY[j];
                intruder_vz = VZ[j];

                printf("Calling step with \n\t%lld : %lf %lf %lf %lf %lf %lf \n\t%lld : %lf %lf %lf %lf %lf %lf\n", ICAO24[i], ownship_latitude, ownship_longitude, ownship_altitude_ft, ownship_vx, ownship_vy, ownship_vz, ICAO24[j], intruder_latitude, intruder_longitude, intruder_altitude_ft, intruder_vx, intruder_vy, intruder_vz); fflush(stdout);
                step();

                if(WCVtepactivated) WCVtep[i][j] = true, WCVtep[j][i] = true; else WCVtep[i][j] = false,WCVtep[j][i] = false;
                if(WCVtcpaactivated) WCVtcpa[i][j] = true,WCVtcpa[j][i] = true; else WCVtcpa[i][j] = false,WCVtcpa[j][i] = false;
                if(WCVtauactivated) WCVtau[i][j] = true,WCVtau[j][i] = true; else WCVtau[i][j] = false,WCVtau[j][i] = false;
                if(WCVtaumodactivated) WCVtaumod[i][j] = true,WCVtaumod[j][i] = true; else WCVtaumod[i][j] = false,WCVtaumod[j][i] = false;
                
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
