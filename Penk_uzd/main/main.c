#include <stdio.h>
#include "antraste.h"


int main() {
    printf("Ivesk kiek skaiciu ivedinesi\n");
    int N, sk, vidurkis;
    scanf("%d", &N);
    int duom[N];
    vidurkis = ivestis(N, duom);
    printf("vidurkis: %d\n", vidurkis);
    int didz,maz;
    didz = ieska(vidurkis, duom, N, 1);
    maz = ieska(vidurkis, duom, N, 0);
    printf("didesnis: %d\nmazesnis: %d\n",didz,maz);
    return 0;
}
