/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonzalv <agonzalv@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:36:13 by agonzalv          #+#    #+#             */
/*   Updated: 2022/09/23 11:21:45 by agonzalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* The isalnum() function returns zero if the
 * character tests false and returns non-zero if the
     character tests true.*/
#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include	"libft.h"

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

/*int main()
{
	printf("%d\n", isalnum('~'));
	printf("%d\n", ft_isalnum('~'));

	return 0;
}*/
