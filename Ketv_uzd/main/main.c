#include <stdio.h>
#include <stdlib.h>
/*
Tikslas. Ciklai, masyvai C kalboje: darbas su statiniais masyvais, for konstrukcijos naudojimas.

Užduotis. Parašyti programą C kalba realizuojančią tokį funkcionalumą:

    Įvesti N sveikų skaičių (N įvedamas iš klaviatūros).
    Rasti tarp įvestų skaičių (masyve) ilgiausią nulių seką, t.y. nuo kurios pozicijos prasideda nuliai ir kiek jų yra.
    Išvesti į ekraną rastą seką ir pirmo rasto elemento kooordinates.
    Panaudoti for ciklo operatorių.

*/
int main() {
    int N;
    int max_sek = 0, max_poz=-1, dab_sek=0, dab_poz=-1;
    printf("Ivesk kiek skaiciu rasysi:\n");
    scanf("%d", &N);
    int mase[N];
    for(int i = 0; i<N; i++) {
        printf("Ivesk skaiciu:\n");
        scanf("%d", &mase[i]);
    }
    for(int j = 0; j<N; j++) {
        //printf("%d: %d\n", j, mase[j]);
        if(mase[j] == 0) {
            dab_sek++;
            if(dab_poz == -1) { //jei nauja seka (nezinoma pozicija)
                dab_poz = j;
            }
            if(dab_sek > max_sek) {
                max_sek = dab_sek;
                max_poz = dab_poz;
            }
        } else { //seka baigesi, nunulinam pozicija ir seka
            dab_poz = -1;
            dab_sek = 0;
        }
    }

    printf("\n\nilgiausia seka: %d, pozicija masyve prasideda: %d \n", max_sek, max_poz);
    return 0;
}
