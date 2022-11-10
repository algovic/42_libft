/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonzalv <agonzalv@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:44:20 by agonzalv          #+#    #+#             */
/*   Updated: 2022/10/17 16:48:43 by agonzalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//1. Declarar ft_memset con tres parametros. 
//		Devolvera un puntero a un area de memoria.
//2. Declarar la variable idx de tipo size_t que iterara
//		a traves del area de memoria.
//3. Ingresara a while donde copia el valor de c 
//		(convertido a unsigned char) en cada uno de los primeros n caracteres 
//		en el objeto apuntado por s.
//4. Retorna el valor de s.

void	*ft_memset(void *s, int c, size_t n)

{
	size_t	idx;

	idx = 0;
	while (idx < n)
	{
		*((unsigned char *)s + idx) = c;
		idx++;
	}
	return (s);
}
