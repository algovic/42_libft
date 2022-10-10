#include <stdio.h>
int main (void)
{
	int valida = 711;
	int clave;

	do
	{
		printf("Introduzca su clave:\n");
		scanf("%d", &clave);
		if (clave != valida) printf("No valida!\7\n\n");
		}
	while (clave != valida);
	printf("Aceptada.\n");
	
	return 0;
}
