/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsimon-c <rsimon-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 12:30:47 by rsimon-c          #+#    #+#             */
/*   Updated: 2020/01/13 12:31:22 by rsimon-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	count;
	size_t	srclen;

	if (dst == NULL || src == NULL)
		return (0);
	srclen = 0;
	while (*(const char *)(src + srclen))
		srclen++;
	if (dstsize == 0)
		return (srclen);
	count = -1;
	while (++count < dstsize - 1 && *(const char *)(src + count))
		*(char *)(dst + count) = *(const char *)(src + count);
	*(char *)(dst + count) = 0;
	return (srclen);
}
