#include <stdio.h>
#include <stdlib.h>
void kubasByRef(int *nPtr );
int main( void )
{
    int number, kubas;
    printf("ivesk sk\n");
    scanf("%d", &number);
    kubasByRef(&number);
    printf("\nSkaiciaus %d kubas yra %d\n", number);
    return 0;
}
void kubasByRef(int *nPtr) {
    *nPtr = *nPtr * *nPtr * *nPtr;
}
