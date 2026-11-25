#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#define MAX_LINE 1024

int main (int argc, char *argv[]) {
    
    
    char line[MAX_LINE];
    
    int opt;
    
    while ((opt = getopt(argc, argv, "a:l")) != -1) {
        
        switch (opt) {
            
            case 'a': {
                FILE *f = fopen("datei.txt", "a");
            
                if (f == NULL) {
                    printf("Datei konnte nicht geoeffnet werden.\n");
                    break;
                }
            
                fprintf(f, "o%s\n", optarg);
                fclose(f);
            
                break;
            }
            case 'l': {
                FILE *f = fopen("datei.txt", "r");

                if (f == NULL) {
                    printf("Datei konnte nicht geoeffnet werden.\n");
                    break;
                }

                int nummer = 1;

                while ((fgets(line, sizeof(line), f)) !=NULL) {
                    printf("%d. %s", nummer, line);
                    nummer++;
                }
                fclose(f);

                break;
            }
            case 'e':
                



            
            

        }
    }
}