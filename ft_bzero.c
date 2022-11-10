/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonzalv <agonzalv@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 13:13:26 by agonzalv          #+#    #+#             */
/*   Updated: 2022/10/28 16:16:04 by agonzalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// 1. ft_bzero() toma dos argumentos: un puntero a "s"
//		y numero de bytes a llenar con cero "n".
// 2. La función llama a ft_memset() para establecer los primeros "n" bytes
//		del área de memoria apuntada por "s" a cero.

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
