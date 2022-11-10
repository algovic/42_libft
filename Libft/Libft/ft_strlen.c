/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonzalv <agonzalv@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 15:57:59 by agonzalv          #+#    #+#             */
/*   Updated: 2022/10/18 11:28:25 by agonzalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

//1. Recorre un string hasta llegar al valor nulo
//	 y devuelve el numero de caracteres.

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}
