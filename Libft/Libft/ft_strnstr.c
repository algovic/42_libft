/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonzalv <agonzalv@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 15:58:57 by agonzalv          #+#    #+#             */
/*   Updated: 2022/10/28 16:24:19 by agonzalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// 1. Si la cadena está vacía, devuelve la propia cadena.
// 2. Obtiene la longitud de la cadena para encontrar.
// 3. Itera a través de la cadena, si la longitud de la cadena 
// 		< longitud de la cadena a buscar, stop.
// 4. Si la primera letra de la cadena = primera letra de la cadena a buscar
//		y el resto de la cadena = cadena para buscar, devuelve la cadena.
// 5. Si es falso devuelve NULL.

char	*ft_strnstr(const char *s, const char *to_find, size_t len)
{
	size_t	position;

	if (*to_find == '\0')
		return ((char *)s);
	position = ft_strlen((char *)to_find);
	while (*s != '\0' && len -- >= position)
	{
		if (*s == *to_find && ft_memcmp(s, to_find, position) == 0)
			return ((char *)s);
		s++;
	}
	return (NULL);
}
