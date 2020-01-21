/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsimon-c <rsimon-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 14:53:46 by rsimon-c          #+#    #+#             */
/*   Updated: 2020/01/20 14:56:16 by rsimon-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *aux;

	aux = *lst;
	if (!aux)
	{
		*lst = new;
	}
	else
	{
		while (aux->next)
			aux = aux->next;
		aux->next = new;
	}
}
