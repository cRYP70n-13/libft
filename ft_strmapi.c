/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okimdil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 22:48:14 by okimdil           #+#    #+#             */
/*   Updated: 2019/10/19 22:56:18 by okimdil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*string;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	string = (char *)malloc(ft_strlen(((char *)s)) + 1);
	if (!s || string == NULL)
		return (NULL);
	while (s[i])
	{
		string[i] = f(i, s[i]);
		++i;
	}
	string[i] = '\0';
	return (string);
}
