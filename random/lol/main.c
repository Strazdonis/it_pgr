#include <stdio.h>
void kubasByReference( int *nPtr );
int main( void )
{
	int number;
	printf("Iveskite skaiciu\n");
	scanf("%d", &number);
	kubasByReference(&number);
	printf( "\nSkaiciaus %d kubas yra %d\n", number );
	return 0;
}

void kubasByReference(int *nPtr)
{
	*nPtr = *nPtr * *nPtr * *nPtr;
}
