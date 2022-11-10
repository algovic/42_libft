/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonzalv <agonzalv@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 14:41:06 by agonzalv          #+#    #+#             */
/*   Updated: 2022/10/17 16:33:56 by agonzalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

//1. Comprueba si char esta entre los caracteres
//	 printables ASCII 32 y 126 retorna 1.
//2. Si no char no es printable retorna 0.

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
