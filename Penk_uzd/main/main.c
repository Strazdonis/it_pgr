#include <stdio.h>
#include <stdlib.h>
/*
    suranda skaiciu arciausia vidurkiui
    @vid = vidurkis, pagal kuri ieskoti
    @duom = duomenys (ivestu skaiciu masyvas)
    @N = kiek duomenu yra masyve (ivestas skaicius N)
    @daugmaz = rasti didesni skaiciu ar mazesni (0 - mazesnis, 1 - didesnis)
*/
int ieska(int vid, int duom[], int N, int daugmaz) {
    int arciausias, sk;
    arciausias = duom[0];
    for(int i = 0; i < N; i++) {
        printf("[ieska] %d\n", duom[i]);
        if(daugmaz == 0) {
            if()
        } else {

        }
    }
    return arciausias;
}

int main() {
    printf("Ivesk kiek skaiciu ivedinesi\n");
    int N, sk, vidurkis, suma=0;
    scanf("%d", &N);
    int duom[N];
    for(int i = 0; i < N; i++) {
        printf("ivesk skaiciu\n");
        scanf("%d", &duom[i]);
        suma+=duom[i];
    }
    vidurkis = suma/N;
    printf("[vidurkis] %d\n", vidurkis);
    ieska(vidurkis, duom, N, 1);
    return 0;
}
