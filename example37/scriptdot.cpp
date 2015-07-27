#include <cstdio>
#include <cstdlib>
#include <string.h>
#include <regex.h>
#include <ctype.h>

#define taille 1000000

using namespace std;


char s[taille+1];
char s2[taille+1];

int main(int argc, char ** argv)
{
    if (argc <= 1) {printf("error not enough arguments\n"); return 0;}
    if (argc == 2) 
    {
	int state = 0;
        //printf("opening %s\n", argv[1]);
        FILE* f = fopen(argv[1],"r+");
        if (f == NULL) {printf ("Error opening file"); return 0;}
        while(fgets(s,taille, f) != NULL)
        {
	    if(strstr(s, "DotEnd*/") != NULL) state = 2;
            if(state == 1) 
            {
                if(strstr(s,"?????") != NULL)
                {   
                    strtok(argv[1],"/");
                    printf("%s%s",strtok (NULL, "/"),s+5);
                }
                else printf("%s",s);
            }
            if(strstr(s, "/*DotBegin") != NULL) state = 1;
        }
        fclose(f);
        
        return 0;
    }
    if (argc > 2) {printf("error too many arguments\n"); return 0;}
    return 0;
}
