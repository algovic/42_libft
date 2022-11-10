/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonzalv <agonzalv@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:36:46 by agonzalv          #+#    #+#             */
/*   Updated: 2022/10/18 17:40:42 by agonzalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// 1. Copia hasta el tamaño: 1 carácter de la cadena terminada en NUL src a dst,
//		Resultado de terminación NUL.
// 2. Devuelve la longitud de la cadena que se intentó crear (longitud de src)
// 3. La variable de índice se usa para contar el número de 
// 		caracteres en string src.
// 4. Count se usa para contar el número de caracteres en la cadena dst.
// 5. while cuenta el número de caracteres en la cadena src.
// 6. while cuenta el número de caracteres en string dst y 
// 		los almacena en string dst.
// 7.	 mientras que el bucle se detiene cuando cuenta variable = tamaño - 1.
// 8. while loop se detiene cuando se alcanza el final de la cadena src.
// 9. while loop se detiene cuando se alcanza el final de la cadena dst.
// 10. while loop se detiene cuando src[count] = '\0'.
// 11. while loop se detiene cuando dst[count] = '\0'.
// 12. si la declaración comprueba si dstsize = 0.

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	index;
	size_t	count;

	index = 0;
	count = 0;
	while (src[index] != '\0')
		index++;
	if (dstsize != 0)
	{
		while (src[count] != '\0' && count < (dstsize - 1))
		{
			dst[count] = src[count];
			count++;
		}
		dst[count] = '\0';
	}
	return (index);
}
