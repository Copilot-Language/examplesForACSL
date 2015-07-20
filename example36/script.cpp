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
        //printf("opening %s\n", argv[1]);
        FILE* f = fopen(argv[1],"r+");
        if (f == NULL) {printf ("Error opening file"); return 0;}
        while(fgets(s,taille, f) != NULL)
        {
            regex_t regex;
            int reti;

            reti = regcomp(&regex, "[:blank:]*const.*=.*;", 0);
            if (reti) {
                fprintf(stderr, "Could not compile regex\n");
                exit(1);
            }

            /* Execute regular expression */
            reti = regexec(&regex, s, 0, NULL, 0);
            if (!reti) {
                char tok1[500];
                char tok2[500];
                char tok3[500];
                sscanf(s,"%s %s %s",tok1,tok2,tok3);
               // printf ("%s\n",tok3);
               // printf("%s", s);
                size_t cnt = 0;
                FILE *f2 = fopen(argv[1],"r");
                while(fgets(s2,taille, f2) != NULL)
                {
                    char * mm = strstr(s2, tok3);
                    if(mm != NULL) 
                    {
                        if(isalnum(*(mm + strlen(tok3)))) continue;
                        
                        cnt ++;
                    }
                }
                fclose(f2);
                if(cnt >= 2)
                    printf("%s", s);
            }
            else if (reti == REG_NOMATCH) {
                printf("%s", s);
            }
            else {
                fprintf(stderr, "Regex match failed\n");
                exit(1);
            }

            regfree(&regex);
        }
        fclose(f);
        
        return 0;
    }
    if (argc > 2) {printf("error too many arguments\n"); return 0;}
    return 0;
}
