/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonzalv <agonzalv@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 10:43:43 by agonzalv          #+#    #+#             */
/*   Updated: 2022/09/27 11:53:09 by agonzalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Convierte un carácter, en un parámetro entero c, a mayúscula.*/
#include <stdio.h>
#include <ctype.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

/*int main()
{
   char cadena[] = "esto es una cadena de prueba";
   int i;
   
   for(i = 0; cadena[i]; i++) 
      cadena[i] = ft_toupper(cadena[i]);

   printf("%s\n", cadena);
   return 0;
}*/
