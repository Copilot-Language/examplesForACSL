/* tu.c

   Unit test for step function from driver.c

*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include "../copilot-sbv-codegen/copilot.h"


/* macros ============================================================== */

#define VER "1.0"
#define TU_NELEM(a) (sizeof(a)/sizeof*(a))

/* public variables ==================================================== */

double ownship_latitude;
double ownship_longitude;
double ownship_altitude_ft;
double ownship_vx;
double ownship_vy;
double ownship_vz;

double intruder_latitude;
double intruder_longitude;
double intruder_altitude_ft;
double intruder_vx;
double intruder_vy;
double intruder_vz;


/* public functions ==================================================== */

void alert_WCVtau()
{
    WCVtauactivated = true;
}
void alert_WCVtcpa()
{
    WCVtcpaactivated = true;
}
void alert_WCVtaumod()
{ 
    WCVtaumodactivated = true;
}
void alert_WCVtep()
{
    WCVtepactivated = true;
}

/* types =============================================================== */
/* structures ========================================================== */


struct test
{
   int tst;
   struct
   {
      double latitude;  //in deg
      double longitude; //in deg
      double altitude;  //in ft
      double vx;        //in m/s east
      double vy;        //in m/s north
      double vz;        //in m/s up
   }
   ownship;
   struct
   {
      double latitude;  //in deg
      double longitude; //in deg
      double altitude;  //in ft
      double vx;        //in m/s east
      double vy;        //in m/s north
      double vz;        //in m/s up
   }
   intruder;
   struct
   {
      bool WCVtau;      //trigger alert_WCVtau();
      bool WCVtcpa;     //trigger alert_WCVtcpa();
      bool WCVtaumod;   //trigger alert_WCVtaumod();
      bool WCVtep;      //trigger alert_WCVtep();
      // no return value
   }
   out;
};


/* private variables =================================================== */

bool WCVtauactivated;
bool WCVtcpaactivated;
bool WCVtaumodactivated;
bool WCVtepactivated;

/* private functions =================================================== */

static int tu_step (void)
{
   int err = 0;

   static struct test const a[] = {
    /* *INDENT-OFF* */
    {10, {0.0   , 0.0   , 0.0   , 0.0   , 0.0   , 0.0   }, 
         {0.0   , 0.0   , 0.0   , 0.0   , 0.0   , 0.0   }, 
         {true , true , true , true }}

    /* *INDENT-ON* */
   };
   size_t i;
   for (i = 0; i < TU_NELEM (a); i++)
   {
      struct test const *p = a + i;

      {
         /* INPUT */
         ownship_latitude     = p->ownship.latitude;
         ownship_longitude    = p->ownship.longitude;
         ownship_altitude_ft  = p->ownship.altitude;
         ownship_vx           = p->ownship.vx;
         ownship_vy           = p->ownship.vy;
         ownship_vz           = p->ownship.vz;
         
         intruder_latitude    = p->intruder.latitude;
         intruder_longitude   = p->intruder.longitude;
         intruder_altitude_ft = p->intruder.altitude;
         intruder_vx          = p->intruder.vx;
         intruder_vy          = p->intruder.vy;
         intruder_vz          = p->intruder.vz;

         WCVtauactivated      = false;
         WCVtcpaactivated     = false;
         WCVtaumodactivated   = false;
         WCVtepactivated      = false;
      }
      {
         /* D.U.T */
         step ();

         {
            if (WCVtauactivated    != p->out.WCVtau)
            {
               printf ("ERR at test #%d (WCVtau    is wrong)\n", p->tst);
               err = 1;
            }
            if (WCVtcpaactivated   != p->out.WCVtcpa)
            {
               printf ("ERR at test #%d (WCVtcpa   is wrong)\n", p->tst);
               err = 1;
            }
            if (WCVtaumodactivated != p->out.WCVtaumod)
            {
               printf ("ERR at test #%d (WCVtaumod is wrong)\n", p->tst);
               err = 1;
            }
            if (WCVtepactivated    != p->out.WCVtep )
            {
               printf ("ERR at test #%d (WCVtep    is wrong)\n", p->tst);
               err = 1;
            }
                
            WCVtauactivated      = false;
            WCVtcpaactivated     = false;
            WCVtaumodactivated   = false;
            WCVtepactivated      = false;
         }
      }
   }

   if (!err)
   {
      puts ("PASSED : step()");
   }

   return err;
}

/* internal public functions =========================================== */
/* entry points ======================================================== */

int main (void)
{
   int err = 0;

   puts ("Testing step from driver.c " VER "\n");

   err |= tu_step ();

   puts ("\nDONE\n");
   if (!err)
   {
      puts ("ALL  PASSED");
   }
   return 0;
}



