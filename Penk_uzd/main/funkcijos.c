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
        if(daugmaz == 0) { //mazesnis
            if(duom[i] < vid) {
                if(arciausias < vid ? duom[i] > arciausias : 1) {
                    arciausias = duom[i];
                }
            }
        } else { //didesnis
            if(duom[i] > vid) {
                if(arciausias > vid ? duom[i] < arciausias : 1) {
                    arciausias = duom[i];
                }
            }

        }
    }
    return arciausias;
}

int ivestis(int N, int duom[N]) {
    int suma = 0;
    for(int i = 0; i < N; i++) {
        printf("ivesk skaiciu\n");
        scanf("%d", &duom[i]);
        suma+=duom[i];
    }
    return suma/N;
}
