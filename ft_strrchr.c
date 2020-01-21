/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsimon-c <rsimon-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 13:07:12 by rsimon-c          #+#    #+#             */
/*   Updated: 2020/01/13 14:31:31 by rsimon-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t				i;
	unsigned char		value;
	char				*result;

	value = c;
	i = 0;
	result = 0;
	while (i <= ft_strlen((char *)s))
	{
		if (s[i] == value)
		{
			result = (char *)s + i;
		}
		i++;
	}
	return (result);
}
