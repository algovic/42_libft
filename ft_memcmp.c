/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonzalv <agonzalv@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:49:06 by agonzalv          #+#    #+#             */
/*   Updated: 2022/10/18 15:21:42 by agonzalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// 1. Utiliza el tipo de datos size_t para almacenar el valor de la longitud
//		del área de memoria a comparar.
//		El tipo de datos size_t se utiliza para representar el tamaño 
//		de un objeto en bytes. Es un tipo int sin signo.
// 2. Compara n bytes del área de memoria s1 con el área de memoria s2.
// 3. Devuelve 0 si las áreas de memoria son iguales.
//		Si no, devuelve la diferencia entre los dos primeros bytes diferentes.
// 4. Deja de comparar bytes cuando se encuentra la primera diferencia.
// 5. Devuelve valor negativo si el primer byte es diferente
//		en el área de memoria s1 < el byte correspondiente en memoria s2.
// 6. Devuelve un valor positivo si el primer byte es diferente
//		en el área de memoria s1 > el byte correspondiente en memoria s2.

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	idx;

	idx = 0;
	while (idx < n)
	{
		if (*((unsigned char *)s1 + idx)
			== *((unsigned char *)s2 + idx))
			idx++;
		else
			return ((*((unsigned char *)s1 + idx))
				- *((unsigned char *)s2 + idx));
	}
	return (0);
}
