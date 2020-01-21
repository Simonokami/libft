/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsimon-c <rsimon-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 12:10:51 by rsimon-c          #+#    #+#             */
/*   Updated: 2020/01/20 12:16:45 by rsimon-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*aux;
	size_t	cont;
	size_t	i;
	size_t	stlen;

	cont = 0;
	i = start;
	if (!s)
		return (NULL);
	aux = (char *)malloc((len + 1) * sizeof(char));
	if (aux == NULL)
		return (NULL);
	stlen = ft_strlen(s);
	if (stlen < start)
	{
		aux[cont] = '\0';
		return (aux);
	}
	while (i < len + start)
	{
		aux[cont++] = s[i++];
	}
	aux[cont] = '\0';
	return (aux);
}
