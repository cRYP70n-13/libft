/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okimdil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 17:33:00 by okimdil           #+#    #+#             */
/*   Updated: 2019/10/20 17:24:04 by okimdil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (*needle == '\0')
		return ((char*)haystack);
	while (*(haystack + i) != '\0' && i < (int)len)
	{
		while (*(needle + j) == *(haystack + i) && i < (int)len)
		{
			j++;
			i++;
			if (*(needle + j) == '\0')
				return ((char *)haystack + (i - j));
		}
		i = i - j;
		j = 0;
		i++;
	}
	return (0);
}
