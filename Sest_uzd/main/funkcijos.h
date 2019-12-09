#include "strukturos.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int nuskaitymas(const char *failas) {
    //cia nuskaitau faila;
    FILE *fp;
    if( access( failas, F_OK ) != -1 ) {
        // file exists
        fp=fopen(failas, "r");
        int lines = 0;
        int ch=0;
        while(!feof(fp)) {
          ch = fgetc(fp);
          if(ch == '\n') {
            lines++;
          }
        }
        struct duomenys *duom[lines];
        char *autorius[255];
        char *pavadinimas[255];
        int data;
        int puslapiai;
        // printf(sizeof(duomenys));
       // struct duom *n= (struct duom*)malloc(sizeof(struct duom));
        for(int i = 0; i < lines; i ++) {
            fscanf(fp, "%s %s %d %d", &autorius, &pavadinimas, data, puslapiai);
            printf("aut: %s\npav:%s\ndata: %d\npusl: %d\n", &autorius, &pavadinimas, data, puslapiai);
        }

        return lines;
    } else {
        printf("\ntoks failas neegzistuoja");
    }

}

void israsymas(char failas[]) {

}
