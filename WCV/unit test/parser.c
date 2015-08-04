/* parser.c

   Parser for the test cases

*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <inttypes.h>

/* macros ============================================================== */

#define xstr(s) str(s)
#define str(s) #s
#define TAILLE 200

/* public variables ==================================================== */
/* public functions ==================================================== */
/* types =============================================================== */
/* structures ========================================================== */
/* private variables =================================================== */
/* private functions =================================================== */
/* internal public functions =========================================== */
/* entry points ======================================================== */

int main (int argc, char ** argv)
{
   if (argc <= 1) printf("error not enough arguments\n");
   else if (argc == 2) 
   {
      char ownship[TAILLE+1] = {0};
      char entree[TAILLE+1] = {0};
      size_t time, itime;
      double x, y, z, vx, vy, vz;
      double ix, iy, iz, ivx, ivy, ivz;
      FILE* fichier = fopen(argv[1],"r+");
      if (fichier == NULL) {printf ("Error opening file"); exit(-1);}
      fscanf(fichier,"ownship = %"xstr(TAILLE)"s\n", ownship);
      fscanf(fichier,"%*[^\n]");
      fgetc(fichier);
      fscanf(fichier,"%*[^\n]");
      fgetc(fichier);
      for(;;)
      {
         int ret;
         char format[2*TAILLE+1] = {0};
         sprintf(format, "%s %%lf %%lf %%lf %%lf %%lf %%lf %%d", ownship);
         ret = fscanf(fichier, format, &x, &y, &z, &vx, &vy, &vz, &time);
         fgetc(fichier);
         if(ret == 7)
         {
            ret = fscanf(fichier,"Intruder %lf %lf %lf %lf %lf %lf %d", &ix, &iy, &iz, &ivx, &ivy, &ivz, &itime);
            fgetc(fichier);
            if(ret == 7 && time == itime)
            {
               printf("   {%-5d, {%+-15.8e, %+-15.8e, %+-15.8e, %+-15.8e, %+-15.8e, %+-15.8e},\n           {%+-15.8e, %+-15.8e, %+-15.8e, %+-15.8e, %+-15.8e, %+-15.8e},\n           {false, false, false, false}},\n",time, x, y, z, vx, vy, vz, ix, iy, iz, ivx, ivy, ivz);
               
               
            }
            else
            {
               printf("FATAL ERROR WHILE READING INPUT DATA01\n");
               exit(-1);
            }
         }
	 else
         {
            printf("FATAL ERROR WHILE READING INPUT DATA02\n");
            exit(-1);
         }
      }
      
      fclose(fichier);
      fichier = NULL;
   }
   else printf("error too much arguments\n"); 
   return 0;
}



