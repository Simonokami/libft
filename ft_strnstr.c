/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsimon-c <rsimon-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 12:40:38 by rsimon-c          #+#    #+#             */
/*   Updated: 2020/01/13 13:02:49 by rsimon-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned int i;
	unsigned int x;
	unsigned int n;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		n = 0;
		if (haystack[i] == needle[n])
		{
			x = i;
			while (haystack[x] == needle[n] && x < len)
			{
				n++;
				x++;
				if (needle[n] == '\0')
					return ((char *)haystack + i);
			}
		}
		i++;
	}
	return (0);
}
