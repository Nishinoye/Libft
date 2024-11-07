/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedcarpi <tedcarpi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:27:33 by tedcarpi          #+#    #+#             */
/*   Updated: 2024/11/07 11:39:38 by tedcarpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t type)
{
	void		*ptr;

	if (count == 0 || type == 0)
		return (NULL);
	ptr = malloc(type * count);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, type * count);
	return (ptr);
}
