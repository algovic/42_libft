/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonzalv <agonzalv@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:30:43 by agonzalv          #+#    #+#             */
/*   Updated: 2022/10/06 12:17:50 by agonzalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	index;

	index = 0;
	while (index < n)
	{
		if (((unsigned char *)s)[index] == (unsigned char)c)
			return (((unsigned char *)s) + index);
		index++;
	}
	return (0);
}
/*int main()
{
	char cadena[] = "Erase una vez...";
	char *puntero;
		
	puntero = (char *)ft_memchr( cadena, 'a', 5);
	printf("%s\n", cadena);
	printf("%s\n", puntero);

	return (0);
}*/
