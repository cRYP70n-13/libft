/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okimdil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/11 16:29:50 by okimdil           #+#    #+#             */
/*   Updated: 2019/10/22 17:10:25 by okimdil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int				i;
	int				k;
	int				lens;
	int				lend;

	i = 0;
	lend = ft_strlen((char*)dst);
	lens = ft_strlen((char*)src);
	k = (size - lend - 1);
	if (k >= 0)
	{
		dst += lend;
		while (i < k && src[i])
			*dst++ = src[i++];
		*dst = '\0';
		return (lens + lend);
	}
	return (lens + size);
}
