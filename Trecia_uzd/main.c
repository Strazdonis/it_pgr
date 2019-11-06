#include <stdio.h>
#include <stdlib.h>

/*
    Tikslas. Sąlygos ir ciklo operatorių panaudojimas C kalboje.

    Užduotis. Parašyti programa C kalba realizuojančią tokį funkcionalumą:

    Įvesti sveikų skaičių seką, kurios pabaigą žymės įvestas skaičius 0.
    Suskaičiuoti ir išvesti į ekraną nelyginių narių (pirmo, trečio ir t.t.), kurie baigiasi skaičiumi 6, skaičių.
    Panaudoti while ir do-while ciklo operatorius.
*/

int main() { //naudojant while
    int x = 1;
    int cntr=0;
    int sum = 0;
    while(x != 0) {
        printf("\nIvesk sekanti sveikaji skaiciu, jei nori baigti ivesk 0\n");
        scanf("%d", &x);
        cntr++;
        if(x%10 == 6 && cntr%2 == 1) { //randa paskutini skaiciu IR jei nelyginis sekoje
            sum++;
           // printf("\ncntr yra %d. x (%d) baigiasi 6, sum = %d\n", cntr, x, sum);
        }
    }
    printf("\nis viso nariu nelyginiu nariu kurie baigesi skaiciumi 6: %d", sum);
    return 0;
}


int main() { //naudojant do-while
    int x = 1;
    int cntr=0;
    int sum = 0;
    do {
        printf("\nIvesk sekanti sveikaji skaiciu, jei nori baigti ivesk 0\n");
        scanf("%d", &x);
        cntr++;
        if(x%10 == 6 && cntr%2 == 1) { //randa paskutini skaiciu IR jei nelyginis sekoje
            sum++;
            // printf("\ncntr yra %d. x (%d) baigiasi 6, sum = %d\n", cntr, x, sum);
        }
    } while(x != 0);
    printf("\nis viso nariu nelyginiu nariu kurie baigesi skaiciumi 6: %d", sum);
    return 0;
}
