/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okimdil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 12:53:34 by okimdil           #+#    #+#             */
/*   Updated: 2019/10/20 17:08:55 by okimdil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char		*s;
	char		*d;
	int			i;

	i = 0;
	s = (char*)src;
	d = (char*)dst;
	while (i < (int)n)
	{
		*(d + i) = *(s + i);
		if (*(unsigned char*)(s + i) == (unsigned char)c)
			return (d + (i + 1));
		i++;
	}
	return (NULL);
}
