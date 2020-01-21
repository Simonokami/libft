/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsimon-c <rsimon-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/26 15:31:09 by rsimon-c          #+#    #+#             */
/*   Updated: 2020/01/13 12:29:31 by rsimon-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	count;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstsize == 0)
		return (srclen);
	if (dstsize < dstlen)
		return (dstsize + srclen);
	count = 0;
	while (count + dstlen < dstsize - 1 && src[count] != '\0')
	{
		dst[count + dstlen] = src[count];
		count++;
	}
	if (count + dstlen < dstsize)
		dst[count + dstlen] = 0;
	dst[count + dstlen] = 0;
	return (srclen + dstlen);
}
