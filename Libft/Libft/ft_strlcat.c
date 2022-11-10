/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonzalv <agonzalv@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:41:55 by agonzalv          #+#    #+#             */
/*   Updated: 2022/10/18 17:54:06 by agonzalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// 1. ft_strlcat() es una función para concatenar dos cadenas.
// 2. Toma tres parámetros: cadena dst, cadena src y tamaño de la cadena dest.
// 3. Agrega la cadena src a la cadena dst.
// 4. Devuelve la longitud de la nueva cadena.
// 5. Devuelve la longitud de la nueva cadena, 
// 		pero no más que el tamaño de la cadena dst.
// 6. Copia el byte nulo de terminación de la cadena src a la cadena dst.
// 7. No devuelve nada si el tamaño de la cadena dst = 0.
// 8. Devuelve la longitud de la cadena src si la longitud de la
// 		 cadena src > tamaño de la cadena dst.
// 9. No devuelve nada si la longitud de la cadena src > cadena dst.

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char	*dest;
	char	*source;
	size_t	dst_length;
	size_t	remaing;

	dest = dst;
	source = (char *)src;
	remaing = dstsize;
	while (remaing-- != 0 && *dest != '\0')
		dest++;
	dst_length = dest - dst;
	remaing = dstsize - dst_length;
	if (remaing == 0)
		return (dst_length + ft_strlen(source));
	while (*source != '\0')
	{
		if (remaing > 1)
		{
			*dest++ = *source;
			remaing--;
		}
		source++;
	}
	*dest = '\0';
	return (dst_length + (source - src));
}
