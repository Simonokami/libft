/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsimon-c <rsimon-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 13:08:27 by rsimon-c          #+#    #+#             */
/*   Updated: 2020/01/10 13:35:02 by rsimon-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char			*dest;
	unsigned const char		*source;
	size_t					a;

	a = 0;
	dest = dst;
	source = src;
	if (dst == 0 && src == 0)
		return (NULL);
	while (a < n)
	{
		dest[a] = source[a];
		if (source[a] == (unsigned char)c)
			return (dst + a + 1);
		a++;
	}
	return (NULL);
}
