/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedcarpi <tedcarpi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:12:38 by tedcarpi          #+#    #+#             */
/*   Updated: 2024/11/08 18:03:05 by tedcarpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	countwords(char const*s, char c)
{
	size_t	count;
	size_t	i;
	size_t	len;
	
	count = 0;
	i = 0;
	len = 0;
	if (s[i] != '\0' && s[i] != c)
		count++;
	while (s[len])
		len++;
	while (i < len)
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
            count++;
        while (s[i] != c && i < len)
            i++;
        i++;
	}
	return (count);
}

size_t	lenword(char const *s,char c, size_t i)
{
	size_t	len;
	
	len = 0;
	while (s[i] && s[i] != c)
	{
		i++;
		len++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	len;
	size_t	count;
	size_t	i;
	size_t	j;
	size_t	k;

	count = countwords(s, c);
	if (count == 0)
		return (NULL);
	res = malloc(sizeof(char *) * (count + 1));
	if (res == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (s[i])
	{
		j = 0;
		len = lenword(s, c, i);
		res[k] = malloc(sizeof(char) * (len + 1));
		while (s[i] != c && s[i])
		{
			res[k][j] = s[i];
			i++;
		}
		res[k][j] = '\0';
		k++;
		while (s[i] == c)
			i++;
		len = 0;
	}
	res[k] = NULL;
	return (res);
}
