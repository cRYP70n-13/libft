/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okimdil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 12:15:09 by okimdil           #+#    #+#             */
/*   Updated: 2019/10/21 16:20:35 by okimdil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*s_src;
	unsigned char		*s_dst;

	if (!src && !dst)
		return (0);
	s_src = (unsigned char *)src;
	s_dst = (unsigned char *)dst;
	i = 0;
	while (i < n)
	{
		s_dst[i] = s_src[i];
		i++;
	}
	return (s_dst);
}
