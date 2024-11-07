/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedcarpi <tedcarpi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 12:28:20 by tedcarpi          #+#    #+#             */
/*   Updated: 2024/11/07 09:59:50 by tedcarpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	size_t			i;
	unsigned char	*ptrd;
	unsigned char	*ptrs;

	i = 0;
	ptrd = (unsigned char *)dest;
	ptrs = (unsigned char *)src;
	if (dest < src)
	{
		while (i < size)
		{
			ptrd[i] = ptrs[i];
			i++;
		}
	}
	else if (dest > src)
	{
		i = size - 1;
		while (i > 0)
		{
			ptrd[i] = ptrs[i];
			i--;
		}
	}
	return (dest);
}
