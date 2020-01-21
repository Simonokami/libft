/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsimon-c <rsimon-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 12:56:18 by rsimon-c          #+#    #+#             */
/*   Updated: 2020/01/20 15:40:53 by rsimon-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, void *src, size_t n)
{
	char *a;
	char *b;

	a = dst;
	b = src;
	if (dst == 0 && src == 0)
		return (NULL);
	if (dst == src)
		return (dst);
	while (n > 0)
	{
		*a = *b;
		a++;
		b++;
		n--;
	}
	return (dst);
}
