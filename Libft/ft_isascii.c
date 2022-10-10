/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonzalv <agonzalv@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:37:34 by agonzalv          #+#    #+#             */
/*   Updated: 2022/09/23 11:23:11 by agonzalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* The isascii() function tests for an ASCII character,
 * which is any character between 0 and octal
     0177 inclusive.*/
#include <stdio.h>
#include <ctype.h>
#include	"libft.h"

int	ft_isascii(int c)
{
	if ((c >= 0 && c <= 127))
		return (1);
	return (0);
}

/*int	main(void)
{
	printf("%d\n", isascii('$'));
	printf("%d\n", ft_isascii('a'));
	return (0);
}*/
