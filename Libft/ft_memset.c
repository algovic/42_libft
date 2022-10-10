/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonzalv <agonzalv@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:44:20 by agonzalv          #+#    #+#             */
/*   Updated: 2022/10/04 16:53:59 by agonzalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

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

/*int	main(void)
{
	char	str[50];

	strcpy (str, "Esto es una funcion");
	puts(str);
	ft_memset(str, '^', 11);
	puts(str);
	return (0);
}*/
