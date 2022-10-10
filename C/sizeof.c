#include <stdio.h>

int  main() {
          float f;
short int i;
          printf("El tamaño de mi float es %lu\n", sizeof f);
          printf("Lo normal para un float es %lu\n", sizeof(float) );
          printf("Pero un entero corto ocupa %lu\n", sizeof i);
		  return (0);
}
