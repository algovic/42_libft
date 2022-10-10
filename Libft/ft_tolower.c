/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonzalv <agonzalv@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 11:56:54 by agonzalv          #+#    #+#             */
/*   Updated: 2022/09/27 12:42:48 by agonzalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Pasa las letras dadas en mayuscula a letras minúsculas (int c).*/

#include <stdio.h>
#include <ctype.h>

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
}

/*int main()
{
   char cadena[] = "PASAR TEXTO A MINUSCULA";
   int i;

   for(i = 0; cadena[i]; i++)
	   cadena[i]= ft_tolower(cadena[i]);

   printf("%s\n", cadena);
   return(0);
}*/
