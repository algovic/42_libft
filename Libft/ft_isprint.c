/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonzalv <agonzalv@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 14:41:06 by agonzalv          #+#    #+#             */
/*   Updated: 2022/09/23 11:24:48 by agonzalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The isprint() function returns zero if the character
 * tests false and returns non-zero if the
     character tests true.*/
#include <stdio.h>
#include <ctype.h>
#include	"libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	printf("%d\n", isprint(25));
	printf("%d\n", ft_isprint(26));
	return (0);
}*/
