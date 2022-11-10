/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonzalv <agonzalv@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:41:12 by agonzalv          #+#    #+#             */
/*   Updated: 2022/10/17 16:23:42 by agonzalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

//1. Comprueba si char es letra y retorna 1 si es letra.
//2. Si char no es letra retorna 0.

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
