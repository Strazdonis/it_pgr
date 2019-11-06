#include <stdio.h>
#include <stdlib.h>

int main() {
    int a,b,fa,fb, didz_liek;
    float a1,b1;

    printf("ivesk sveika skaiciu a\n");
    scanf("%d", &a);
    printf("ivesk sveika skaiciu b\n");
    scanf("%d", &b);
    //liekanos
    fa = a%7;
    fb = b%7;

    if(fa > fb) {
        printf("pirmo skaiciaus (a) liekana didesne (%d > %d)\n", fa, fb);
        didz_liek = fa;
    } else if(fa != fb) {
        printf("antro skaiciaus (b) liekana didesne (%d > %d)\n", fb, fa);
        didz_liek = fb;
    } else {
        printf("%s\n", "lygus");
        didz_liek = fa;
    }
    switch(didz_liek) {
        case 0 ... 2:
            printf("patenka i 0-2");
            break;
        case 3 ... 4:
            printf("patenka i 3-4");
            break;
        default: //daugiau uz 5
            printf("daugiau uz 5");
            break;
    }
    return 0;
}
