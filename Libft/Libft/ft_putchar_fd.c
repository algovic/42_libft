/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonzalv <agonzalv@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:24:19 by agonzalv          #+#    #+#             */
/*   Updated: 2022/11/08 12:37:22 by agonzalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// 1. Toma la variable char y la variable int como parametros.
// 2. Utiliza la funcion de esritura para imprimir la variable char 
// 		en el descriptor de archivo que representa la variable int.

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
