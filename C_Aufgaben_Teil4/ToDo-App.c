#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#define MAX_LINE 1024

int main (int argc, char *argv[]) {
    
    FILE *f = fopen("datei.txt", "r");

    char line[MAX_LINE];

    while ((fgets(line, sizeof(line), f)) !=NULL) {
        printf("%s", line);
    }
    fclose(f);

    int opt;

    while ((opt = getopt(argc, argv, "a:")) != -1) {

        switch (opt) {
            case 'a': 
                FILE *f = fopen("datei.txt", "a");

                if (f == NULL) {
                    printf("Datei konnte nicht geoeffnet werden.\n");
                    break;
                }

                fprint(f, "%s\n", optarg);
                fclose(f);

                break;

            case 'e': 

            
            

        }
    }
}