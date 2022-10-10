#include <stdio.h>

int main (void)

{
	int numero;

	printf("Teclea un numero ( 0 para salir ):\n");
	scanf("%d", &numero);

	while (numero !=0)
	{
		if (numero > 0) 
			printf("Es positivo.\n");
		else 
			printf("ES negativo.\n");
		printf("Teclea otro numero o 0 para salir:\n");
		scanf("%d", &numero);
	}
	return 0;
}
