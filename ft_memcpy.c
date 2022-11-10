/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonzalv <agonzalv@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:36:11 by agonzalv          #+#    #+#             */
/*   Updated: 2022/10/18 14:47:44 by agonzalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// 1. Comprueba si dest y src son iguales o si el número de bytes es 0.
//		Si es así, devuelve el puntero dest, que = puntero src.
// 2. Crea unsigned int (idx) = 0 para saber cuántos bytes se han copiado.
// 3. While siempre que idx < n (siempre que haya bytes para copiar).
// 4. La primera línea del ciclo while usa el operador (*) para establecer 
// 		el valor del byte en la dirección de destino + valor de idx al valor
// 		 del byte en la dirección src + valor de idx.
// 5. variable idx incrementada en 1, y el ciclo se reinicia
//		hasta que alcance el número de bytes a copiar.
// 6. Devuelve el puntero de destino.

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	idx;

	if (dest == src || !n)
		return (dest);
	idx = 0;
	while (idx < n)
	{
		*((char *)dest + idx) = *((char *)src + idx);
		idx++;
	}
	return (dest);
}
