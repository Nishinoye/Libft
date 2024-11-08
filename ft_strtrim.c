/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tedcarpi <tedcarpi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 10:15:58 by tedcarpi          #+#    #+#             */
/*   Updated: 2024/11/08 11:51:06 by tedcarpi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t		i;
	size_t		j;
	
	i = 0;
	j = ft_strlen(s1);
	while (ft_strchr(set, s1[i]) && s1[i])
		i++;
	while (ft_strrchr(set, s1[j]))
		j--;
	j++;
	res = ft_substr(s1,i, j - i);
	return (res);
}
int	main()
{
	char	array [] = "cbaabcaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
	char	set [] = "abc";
	char	*res;

	res = ft_strtrim(array, set);
	printf("%s", res);
}