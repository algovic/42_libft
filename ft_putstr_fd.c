/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonzalv <agonzalv@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:33:49 by agonzalv          #+#    #+#             */
/*   Updated: 2022/10/31 13:45:17 by agonzalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// 1. Toma dos parametros: str para imprimir y file descriptor.
// 2. Usamos el parametro fd para decidir donde imprimir.
// 3. Si str no es NULL, itera y usa ft_putchar_fd para imprimir cada caracter.
// 4. ft_putchar_fd toma dos parametros: char para imprimir y file descriptor.
// 5. Utiliza el parametro fd para decidir donde imprimir.

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	if (s != NULL)
	{
		i = 0;
		while (s[i])
		{
			ft_putchar_fd(s[i], fd);
			i++;
		}
	}
}
