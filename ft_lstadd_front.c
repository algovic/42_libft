/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agonzalv <agonzalv@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:11:43 by agonzalv          #+#    #+#             */
/*   Updated: 2022/11/15 18:03:26 by agonzalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Añade el nodo ’new’ al principio de la lista ’lst’.

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
