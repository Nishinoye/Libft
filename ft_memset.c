/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedcarpi <tedcarpi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:26:42 by tedcarpi          #+#    #+#             */
/*   Updated: 2024/11/07 09:59:55 by tedcarpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *array, int value, size_t size)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)array;
	i = 0;
	while (i < size)
	{
		ptr[i] = (unsigned char)value;
		i++;
	}
	return (array);
}
