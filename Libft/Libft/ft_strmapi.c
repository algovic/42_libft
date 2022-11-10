/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonzalv <agonzalv@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:55:57 by agonzalv          #+#    #+#             */
/*   Updated: 2022/10/28 17:14:08 by agonzalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// 1. Crea una cadena con la misma longitud que la cadena original.
// 2. Comprueba si hay una cadena, si hay funcion y si la cadena se copia.
// 3. Crea un contador y un bucle para iterar a traves de la cadena.
// 4. Aplica la funcion a cada caracter en la cadena.
// 5. Devuelve la nueva cadena.

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	str = ft_strdup(s);
	if (!s || !f || !str)
		return (0);
	i = 0;
	while (str[i])
	{
		str[i] = f(i, str[i]);
		i++;
	}
	return (str);
}
