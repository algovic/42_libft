#include <stdio.h>

int main (void)
{
	char letra1, letra2;

	printf("Teclea una letra ");
	scanf("%c", &letra1);
	letra2 = 'a';
	printf("La letra que has tecleado es %c y la prefijada es %c\n", letra1, letra2);
}
