/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedcarpi <tedcarpi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:28:20 by tedcarpi          #+#    #+#             */
/*   Updated: 2024/11/07 11:48:33 by tedcarpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	size_t			i;
	unsigned char	*ptd;
	unsigned char	*pts;

	i = 0;
	ptd = (unsigned char *)dest;
	pts = (unsigned char *)src;
	if (dest < src)
		ft_memcpy(ptd, pts, size);
	else if (dest > src)
	{
		i = size;
		while (i > 0)
		{
			i--;
			ptd[i] = pts[i];
		}
	}
	return (dest);
}
