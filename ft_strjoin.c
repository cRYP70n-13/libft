/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okimdil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 02:26:07 by okimdil           #+#    #+#             */
/*   Updated: 2019/10/22 21:00:43 by okimdil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_strcpy(char *s1, char *s2)
{
	while ((*s1++ = *s2++))
		;
}

static char	*ft_strcat(char *destination, const char *source)
{
	char *ptr;

	ptr = destination + ft_strlen(destination);
	while (*source != '\0')
		*ptr++ = *source++;
	*ptr = '\0';
	return (destination);
}

char		*ft_strjoin(const char *s1, const char *s2)
{
	char *result;

	if (!s1 || !s2)
		return (NULL);
	result = malloc(ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1);
	if (result == NULL)
		return (NULL);
	if (result)
	{
		ft_strcpy(result, (char *)s1);
		ft_strcat(result, (char *)s2);
	}
	return (result);
}
