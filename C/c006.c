#include <stdio.h>

int main ()
{
	long int uno;
	long int dos;
	long int m;


	printf("Ingrese 4 digitos.\n");
	scanf("%ld", &uno);
	printf("Ingrese otros 4 digitos. \n");
	scanf("%ld", &dos);
	m = uno*dos;
	printf("El resultado es: %ld \n", m);

	return (0);

}

