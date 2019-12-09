#include <stdio.h>
#include <stdlib.h>
//#include "strukturos.h"
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
int main() {

    char *failas[255];
    printf("irasykite failo pavadinima\n");
    scanf("%s", failas);
    nuskaitymas(failas);

    return 0;
}
