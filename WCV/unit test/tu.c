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

double ownship_x;
double ownship_y;
double ownship_z;
double ownship_vx;
double ownship_vy;
double ownship_vz;

double intruder_x;
double intruder_y;
double intruder_z;
double intruder_vx;
double intruder_vy;
double intruder_vz;


bool WCVtauactivated;
bool WCVtcpaactivated;
bool WCVtaumodactivated;
bool WCVtepactivated;


double ownship_x_position_ft;
double intruder_x_position_ft;
double ownship_y_position_ft;
double intruder_y_position_ft;
double ownship_vx;
double intruder_vx;
double ownship_vy;
double intruder_vy;
double ownship_z_position_ft;
double intruder_z_position_ft;
double ownship_vz;
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
      double x;         //in ft
      double y;         //in ft
      double z;         //in ft
      double vx;        //in ft/s
      double vy;        //in ft/s
      double vz;        //in ft/s
   }
   ownship;
   struct
   {
      double x;         //in ft
      double y;         //in ft
      double z;         //in ft
      double vx;        //in ft/s
      double vy;        //in ft/s
      double vz;        //in ft/s
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
/* private functions =================================================== */

static int tu_step (void)
{
   int err = 0;

   static struct test const a[] = {
    /* *INDENT-OFF* */

    /* *INDENT-ON* */
   };
   size_t i;
   for (i = 0; i < TU_NELEM (a); i++)
   {
      struct test const *p = a + i;

      {
         /* INPUT */
         ownship_x_position_ft  = p->ownship.x;
         ownship_y_position_ft  = p->ownship.y;
         ownship_z_position_ft  = p->ownship.z;
         ownship_vx             = p->ownship.vx;
         ownship_vy             = p->ownship.vy;
         ownship_vz             = p->ownship.vz;
         
         intruder_x_position_ft = p->intruder.x;
         intruder_y_position_ft = p->intruder.y;
         intruder_z_position_ft = p->intruder.z;
         intruder_vx            = p->intruder.vx;
         intruder_vy            = p->intruder.vy;
         intruder_vz            = p->intruder.vz;

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
   else
   {
      puts ("SOME FAILED");
   }
   return 0;
}



