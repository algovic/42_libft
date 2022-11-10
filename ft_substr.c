/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonzalv <agonzalv@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 14:19:36 by agonzalv          #+#    #+#             */
/*   Updated: 2022/11/10 11:19:10 by agonzalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// 1. Toma 3 argm, la string, el punto e inicio y long a devolver.
// 2. Si no hay string retorna nulo.
// 3. Si la string a buscar es mayor que la string original retorna str vacia.
// 4. Copia el trozo de cadena demandado y la retorna.

char	*ft_substr(char const *s, unsigned int start, size_t len)

{
	size_t	s_len;
	char	*substr;
	size_t	i;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	i = 0;

	////
	if (len > (s_len - start))
		len = s_len - start;
	////
	if (start >= s_len)
	{
		substr = (char *)malloc(1);
		if (substr == NULL)
			return (NULL);
		substr[0] = '\0';
		return (substr);
	}
	substr = (char *)malloc(len + 1);
	if (substr == NULL)
		return (NULL);
	while (i++ < start)
		s++;
	ft_strlcpy(substr, s, len +1);
	return (substr);
}
