/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsimon-c <rsimon-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 12:35:15 by rsimon-c          #+#    #+#             */
/*   Updated: 2020/01/20 12:44:43 by rsimon-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check(char c, const char *set)
{
	int strlen;
	int it;

	it = 0;
	strlen = ft_strlen(set);
	while (it < strlen)
	{
		if (c == set[it])
			return (1);
		it++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t		k;
	long int	len;
	char		*aux;
	long int	i;

	i = 0;
	k = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	len = ft_strlen(s1);
	while (ft_check(s1[i], set))
		i++;
	while (len > 0 && ft_check(s1[len - 1], set))
		len--;
	if (len < i)
		len = i;
	aux = (char*)malloc(sizeof(char) * (len - i + 1));
	if (!aux)
		return (NULL);
	while (i < len)
		aux[k++] = s1[i++];
	aux[k] = '\0';
	return (aux);
}
