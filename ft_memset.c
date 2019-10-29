/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okimdil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 11:36:17 by okimdil           #+#    #+#             */
/*   Updated: 2019/10/20 17:09:50 by okimdil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char			x;
	size_t					i;
	char					*ptr;

	ptr = b;
	i = 0;
	x = c;
	while (i < len)
	{
		*(ptr + i) = x;
		i++;
	}
	return (ptr);
}
