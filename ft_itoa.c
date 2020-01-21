/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsimon-c <rsimon-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 12:58:41 by rsimon-c          #+#    #+#             */
/*   Updated: 2020/01/20 13:01:56 by rsimon-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		numb(int nb)
{
	if (nb == 0)
		return (1);
	return (1 + numb(nb / 10));
}

static char		*touch(char *s, int num, int i)
{
	unsigned int l;

	l = 0;
	if (num == 0)
		*s = num + 48;
	else if (num < 0)
	{
		*s = '-';
		l = num * (-1);
	}
	else
		l = num;
	s[i + 1] = '\0';
	while (l != 0)
	{
		s[i] = l % 10 + 48;
		l = l / 10;
		i--;
	}
	return (s);
}

char			*ft_itoa(int n)
{
	int		len;
	char	*dst;

	if (n > 0)
		len = numb(n) - 1;
	else
		len = numb(n);
	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (dst == NULL)
		return (NULL);
	return (touch(dst, n, len - 1));
}
