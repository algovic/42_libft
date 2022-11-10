/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonzalv <agonzalv@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:09:17 by agonzalv          #+#    #+#             */
/*   Updated: 2022/10/17 16:27:19 by agonzalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

//1. Comprueba si char es numero y retorna 1 si lo es.
//2. Si no es numero retorna 0.

int	ft_isdigit(int c)
{
	if ((c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}
