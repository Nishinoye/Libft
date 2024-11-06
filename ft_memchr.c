/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedcarpi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 08:48:05 by tedcarpi          #+#    #+#             */
/*   Updated: 2024/11/06 08:58:07 by tedcarpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *block, int src, size_t size)
{
	size_t			i;
	unsigned char	*ptrb;
	unsigned char	c;

	i = 0;
	ptrb = (unsigned char *)block;
	c = (unsigned char)src;
	while (i < size)
	{
		if (ptrb[i] == c)
			return ((void *)&ptrb[i]);
		i++;
	}
	return (NULL);
}
