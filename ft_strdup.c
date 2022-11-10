/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonzalv <agonzalv@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:56:43 by agonzalv          #+#    #+#             */
/*   Updated: 2022/10/18 18:12:28 by agonzalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// 1. malloc asigna memoria del tamaño de s1 + 1.
//		agregamos 1 al tamaño para agregar terminación nula a la cadena.
// 2. Comprueba si la asignación es exitosa, si no, devuelve 0.
// 3. Si está bien, ft_memcpy copia la cadena s1 en la nueva cadena s2.
// 4. Retorna s2.

char	*ft_strdup(const char *s1)
{
	char	*s2;

	s2 = (char *) malloc(ft_strlen(s1) + 1);
	if (!s2)
		return (0);
	ft_memcpy(s2, s1, ft_strlen(s1) + 1);
	return (s2);
}
