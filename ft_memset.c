/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedcarpi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:26:42 by tedcarpi          #+#    #+#             */
/*   Updated: 2024/11/05 11:13:18 by tedcarpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
