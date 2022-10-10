#include <stdio.h>

int main(void)
{
	int n1, n2;
	int producto;

	printf("Ingrese un numero: \n");
	scanf("%d", &n1);
	if (n1 == 0)
		{
			printf("El producto de 0 por cualquier numero es 0\n");
			return (0);
		}
	printf("Ingrese otro numero: \n");
	scanf("%d", &n2);
	producto = n1*n2;
	printf("El resultado es: %d\n", producto);
	return (0);

}
