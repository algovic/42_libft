/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonzalv <agonzalv@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:59:58 by agonzalv          #+#    #+#             */
/*   Updated: 2022/11/08 12:33:36 by agonzalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// 1. Compruebe si n = 0. Si es verdadero, devuelva 0.
// 2. Declare la variable idx e inicialice en 0.
// 3. while bucle que se ejecutará mientras idx < n.
// 4. Compruebe si s1[idx] no = 0 y si s1[idx] = s2[idx].
//     Si es verdadero, ingrese otro ciclo while.
// 5. Compruebe si s1[idx] no = 0, si s1[idx] = s2[idx] y si idx < n.
//     Si es verdadero incrementa idx en 1.
// 6. Devuelve la diferencia entre s1[idx] y s2[idx].
// 7. Devolver 0

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	idx;

	if (n == 0)
		return (0);
	idx = 0;
	while (idx < n)
	{
		if (s1[idx] && s1[idx] == s2[idx])
		{
			while (s1[idx] && s1[idx] == s2[idx] && idx < n)
						idx++;
		}
		else
			return ((unsigned char)s1[idx] - (unsigned char)s2[idx]);
	}
	return (0);
}
