/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonzalv <agonzalv@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 13:52:50 by agonzalv          #+#    #+#             */
/*   Updated: 2022/10/18 14:35:55 by agonzalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//1. Calcula el tamaño multiplicando elementos (recuento) por cada uno (tamaño).
//2. Utiliza malloc() para asignar memoria para la matriz.
//3. Utiliza ft_memset() para establecer toda la memoria asignada en 0.
//4. Devuelve la memoria asignada.

void	*ft_calloc(size_t count, size_t size)
{
	size_t	tot_size;
	void	*dst;

	tot_size = size * count;
	dst = malloc(tot_size);
	if (!dst)
		return (0);
	ft_memset(dst, 0, tot_size);
	return (dst);
}
