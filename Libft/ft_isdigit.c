/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonzalv <agonzalv@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:09:17 by agonzalv          #+#    #+#             */
/*   Updated: 2022/09/23 11:23:58 by agonzalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The isdigit() functions return zero if the character tests
     false and return non-zero if the character tests true. */

#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include	"libft.h"

int	ft_isdigit(int c)
{
	if ((c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

/*int main()
{
	printf("%d\n", isdigit('a'));
	printf("%d\n", ft_isdigit('j'));

	return 0;
}*/
