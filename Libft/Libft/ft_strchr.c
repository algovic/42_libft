/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonzalv <agonzalv@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 13:10:43 by agonzalv          #+#    #+#             */
/*   Updated: 2022/10/17 16:54:29 by agonzalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//1. Localiza la primera aparición de c (convertido a unsigned char) 
//		en la cadena apuntada por s (incluyendo el carácter nulo).
//2. La función retorna un puntero a partir del carácter encontrado.
//		 Si no se ha encontrado el carácter, c, retorna un puntero null.

char	*ft_strchr( const char *s, int c)
{
	return (ft_memchr(s, c, ft_strlen(s) +1));
}
