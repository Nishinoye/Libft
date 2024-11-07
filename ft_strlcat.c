/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedcarpi <tedcarpi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:47:41 by tedcarpi          #+#    #+#             */
/*   Updated: 2024/11/07 12:51:23 by tedcarpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	j = ft_strlen(dest);
	i = ft_strlen(src);
	if (j >= size)
		return (size + i);
	i = 0;
	while (src[i] && j + i < size - 1)
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (j + i);
}
