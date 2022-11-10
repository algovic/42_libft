/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonzalv <agonzalv@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:22:10 by agonzalv          #+#    #+#             */
/*   Updated: 2022/10/18 18:15:13 by agonzalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// 1. Verifiqua si *dest = *src, si es verdadero, devuelve el *dest.
// 2. Comprueba si el valor de n es 0, si es verdadero, devuelve el *dest.
// 3. Comprueba si *dest < *src, si es verdadero.
//		copia los bytes de *src  a *dest en orden.
// 4. Verifiqua si *dest  > *src, si es verdadero.
//		copia los bytes del *src al *dest en orden inverso.
// 5. Retorna *dest.

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	idx;

	if (dest == src || !n)
		return (dest);
	idx = 0;
	if (dest < src)
	{
		while (idx < n)
		{
			*((char *)dest + idx) = *((char *)src + idx);
			idx++;
		}
	}
	else
	{
		while (n > 0)
		{
			*((char *)dest + n - 1) = *((char *)src + n - 1);
			n--;
		}
	}
	return (dest);
}
