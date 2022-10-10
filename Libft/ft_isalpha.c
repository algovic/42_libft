/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonzalv <agonzalv@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:41:12 by agonzalv          #+#    #+#             */
/*   Updated: 2022/09/23 11:22:34 by agonzalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*The isalpha() function returns zero if the character tests false and
     returns non-zero if the character tests true*/
#include <stdio.h>
#include <ctype.h>
#include	"libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	printf("%d\n", isalpha('s'));
	printf("%d\n", ft_isalpha('s'));
	return (0);
}*/
