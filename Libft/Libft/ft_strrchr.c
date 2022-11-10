/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonzalv <agonzalv@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 11:50:04 by agonzalv          #+#    #+#             */
/*   Updated: 2022/10/28 16:24:47 by agonzalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// 1. Obtiene la longitud de la cadena usando ft_strlen.
// 2. Usa un while para comprobar si char esta en la cadena.
// 3. Si char esta, devuelve la posicion de char en la cadena.
// 4. Si no devuelve 0.

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
			i--;
	}
	return (0);
}
