#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "antraste.h"
#include "funkcijos.h"

/*
 Tikslas. Struktūrų, rodyklių, dinaminės atminties, funkcijų, modulių, darbo su failais naudojimas C kalboje.

Užduotis. Parašyti programą C kalba realizuojančią tokį funkcionalumą:

    Iš tekstinio failo nuskaitomos eilutės, kur kiekvienoje eilutėje yra įrašas apie knygą (autorius, pavadinimas, išleidimo data, puslapių skaičius).
    Išvesti į atskirus failus knygas pagal išleidimo metus.
    Užduočiai reikalingas duomenų struktūras aprašome antraštės faile.
    Užduočiai reikalingiems masyvams atmintis turi būti išskiriama dinamiškai.
    Duomenų įvedimas realizuojamas iš tekstinio failo, kurio pavadinimas įvedamas programos veikimo metu arba paduodant jį kaip parametrą paleidžiant programą (turi būti realizuota failo egzistavimo kontrolė).
    Programą turi sudaryti 3 failai: antraštės failas, failas realizuojantis mažiausiai dvi funkcijas bei failas su main funkcija.
*/


int main(int argc, char *argv[]) {
    char fileName[50];
    int tryCount = 0, eiluciu = 0, status=0;
    if (argc > 2)   {
        printf("Irasyk viena argumenta pvz.\"failas.txt\" tu irasei: %d\n", argc);
        return 0;
    } else if(argc == 2) { // dave argumenta
        strcpy(fileName, argv[1]);
        tryCount = 3; //kad bandytu tik karta
    }

    knygos* duom;
    FILE *f;
    //Failo varda bandysime ivesti is klaviaturos, max 3 kartus
    do {
        if(argc == 1) {
            printf("Iveskite failo pavadinima: ");
            scanf("%s", fileName);
        }
        tryCount++;
        f = fopen(fileName, "r");
        if (f != NULL) {
            mkdir("knygos/", 0700); //sukuria direktorija "knygos/" jei neegzistuoja
            status=1;
            eiluciu = eil_sk(f);
            duom = (knygos*) malloc(eiluciu * sizeof(knygos));
            int i;
            char buf[100];
            char *vardas = (char*)malloc(sizeof(char*)), *pavarde = (char*)malloc(sizeof(char*)), *pavadinimas[20];
            char failas[4];
            int metai,puslapiai;
            for(i=0; i<eiluciu; i++) {
                if(fgets(buf, sizeof(buf), f)!=NULL) {
                    sscanf(buf, "%s %s %s %d %d",
                        vardas,pavarde,pavadinimas,
                        &metai, &puslapiai
                    );

                    duom->vardas=(char*)malloc(sizeof(char*));
                    duom->vardas = vardas;

                    duom->pavarde=(char*)malloc(sizeof(char*));
                    duom->pavarde = pavarde;

                    duom->pavadinimas=(char*)malloc(sizeof(char*));
                    duom->pavadinimas = pavadinimas;

                    duom->metai=metai;
                    duom->puslapiai = puslapiai;

                    sprintf(failas, "knygos/%i.txt", metai); // 1944 -> knygos/1944.txt
                   // printf("failo pavadinimas bus: %s\n", failas);
                    israsymas(failas, duom);
                }
            }
            free(vardas);
            free(pavarde);
            free(pavadinimas);
            free(duom);
        }
        else {
            printf("Nepavyko nuskaityti failo.\n");
        }
    } while (!status && tryCount < 3);

    if (!status)
    {
        printf ("Darbas baigtas.");
        exit(1);
    }

    return 0;
}
