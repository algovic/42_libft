#include <stdio.h>
int main (void)
{
	int n1 = 5, n2 = 2;
	float division1, division2;

	printf("Mis numeros son %d y %d\n", n1, n2);
	division1 = n1/n2;
	printf("Y su division es %f\n", division1);
	division2 = (float)n1 / (float)n2;
	printf("Pero si convierto antes a float: %f\n", division2);
	return (0);
}
