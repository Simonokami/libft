/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsimon-c <rsimon-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 16:14:03 by rsimon-c          #+#    #+#             */
/*   Updated: 2020/01/20 15:46:36 by rsimon-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char			*cpy1;
	size_t					i;

	i = 0;
	cpy1 = (unsigned char *)dst;
	if (dst == 0 && src == 0)
		return (NULL);
	if (dst == src)
		return (dst);
	if (src < dst)
	{
		while (len > 0)
		{
			len--;
			cpy1[len] = *((unsigned char *)src + len);
		}
	}
	else
	{
		ft_memcpy(dst, (void *)src, len);
	}
	return (dst);
}
