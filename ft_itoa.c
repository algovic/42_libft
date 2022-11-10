/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonzalv <agonzalv@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:17:55 by agonzalv          #+#    #+#             */
/*   Updated: 2022/10/27 16:23:52 by agonzalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//1. Si num es < 0, agregue 1 al tamaño para agregar '-'.
//2. Inicia el ciclo para dividir num por 10 hasta = 0.
//3. Divide num por 10 y aumenta el tamaño en 1.
//4. Si el número es 0, rompe el bucle y devuelve el tamaño.

size_t	ft_itoa_nsize(long number)
{
	size_t	size;

	if (number < 0)
		size = 1;
	else
		size = 0;
	while (1)
	{
		number /= 10;
		size++;
		if (number == 0)
			break ;
	}
	return (size);
}

//1. ft_itoa_nsize() para determinar el tamaño de la matriz que necesitamos
//   para almacenar la cadena del número dado.
//2. Búfer para la representación de cadena del número.
//3. Si num es < 0, el primer carácter de la cadena se establece en '-'
//   y num se multiplica por -1 para que sea positivo.
//4. Último carácter de la cadena establecido en \0.
//5. Cadena rellena con los dígitos del num.
//6. Se devuelve la representación de cadena del número.

char	*ft_itoa(int n)
{
	long	number;
	char	*array;
	size_t	size;

	number = n;
	size = ft_itoa_nsize(n);
	array = malloc((size + 1) * sizeof(char));
	if (!array)
		return (NULL);
	if (number < 0)
	{
		array[0] = '-';
		number *= -1;
	}
	array [size] = '\0';
	while (1)
	{
		array[size - 1] = (number % 10) + '0';
		number /= 10;
		size--;
		if (number == 0)
			break ;
	}
	return (array);
}
