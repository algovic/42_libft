/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonzalv <agonzalv@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:08:32 by agonzalv          #+#    #+#             */
/*   Updated: 2022/10/31 13:08:55 by agonzalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// 1. Itera a traves de cadenas pasadas como argumento y pasa index y char a f.
//	cada caracter se pasa por direccion a f para modificarlo si es necesario.
// 2. Para modificar la cadena, la funcion se declara con tipo void.
// 3. No devuelve nada (void).
// 4. Necesita una cadena (s) y un puntero de funcio (f).
// 5. Itera a traves de la cadena y pasa el indice y el caracter a la funcion f
// 6. Comprueba si la cadena s o el puntero de funcion f = nulo.
// 		Si es verdadero, la funcion regresa sin hacer nada.
// 7. Declara la variable int i y se inicializa en 0.
// 		SE utiliza pasa almacenar el indice de la cadena.
// 8. La funcion itera a traves de la cadena hasta que alcance  caracter final
// 		en cada iteracion , pasa el indice y el caracter a la funcion f.
// 9. La funcion incrementa la variable de indice.

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}
