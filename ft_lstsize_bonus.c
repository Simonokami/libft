/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsimon-c <rsimon-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 14:42:43 by rsimon-c          #+#    #+#             */
/*   Updated: 2020/01/20 14:45:43 by rsimon-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int cont;

	cont = 0;
	if (lst)
	{
		while (lst->next)
		{
			lst = lst->next;
			cont++;
		}
		cont++;
	}
	return (cont);
}
