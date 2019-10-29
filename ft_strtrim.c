/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okimdil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 13:12:23 by okimdil           #+#    #+#             */
/*   Updated: 2019/10/22 17:51:49 by okimdil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_check_char(char const *set, char c)
{
	while (*set != '\0')
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	size_t	end;
	size_t	start;
	size_t	i;
	char	*str;

	i = 0;
	if (!s1 || *s1 == '\0')
		return ((char *)s1);
	end = ft_strlen((char *)s1) - 1;
	start = 0;
	while (s1[start] != '\0' && ft_check_char(set, s1[start]) != 0)
		start++;
	while (ft_check_char(set, s1[end]) != 0 && end > 0)
		end--;
	if (end == 0)
		str = (char *)malloc(1);
	else
		str = (char *)malloc(end - start + 2);
	if (!str)
		return (0);
	while (start <= end)
		str[i++] = s1[start++];
	str[i] = '\0';
	return (str);
}
