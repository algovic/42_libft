/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonzalv <agonzalv@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 15:57:59 by agonzalv          #+#    #+#             */
/*   Updated: 2022/09/23 11:26:54 by agonzalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* Usaremos la funcion (strlen) para contar 
 * letras y mostar el resultado en pantalla.*/

#include <stdio.h>
#include	"libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/*int	main(void)
{
	char str[] = "Hola mundo";
	int result = ft_strlen(str);
	printf("La longitud de la cadena es %d.\n", result);
	return (0);
}*/
