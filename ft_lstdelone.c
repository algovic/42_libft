/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonzalv <agonzalv@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 17:40:12 by agonzalv          #+#    #+#             */
/*   Updated: 2022/11/15 18:01:01 by agonzalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Toma como parámetro un nodo ’lst’ y libera la memoria del contenido 
// utilizando la función ’del’//dada como parámetro, además de liberar el
// nodo La memoria de ’next’ no debe liberarse.

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}
