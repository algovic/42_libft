/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonzalv <agonzalv@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:37:34 by agonzalv          #+#    #+#             */
/*   Updated: 2022/10/17 16:22:56 by agonzalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

//1.Comprueba si char es ASCII, si es retorna 1.
//2.Si no lo es retorna 0.

int	ft_isascii(int c)
{
	if ((c >= 0 && c <= 127))
		return (1);
	return (0);
}
