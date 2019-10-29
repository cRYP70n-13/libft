/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okimdil <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 17:59:14 by okimdil           #+#    #+#             */
/*   Updated: 2019/10/22 21:02:46 by okimdil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count(int n)
{
	unsigned int	nbr;
	int				i;

	i = 1;
	if (n < 0)
	{
		nbr = -n;
		i++;
	}
	else
		nbr = n;
	while (nbr / 10 > 0)
	{
		i++;
		nbr = nbr / 10;
	}
	return (i);
}

char			*ft_itoa(int n)
{
	size_t			size;
	unsigned int	nb;
	char			*str;

	nb = n;
	size = ft_count(n);
	if (!(str = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	if (n == 0)
	{
		str[0] = '0';
		str[1] = '\0';
	}
	if (n < 0)
	{
		nb = -n;
		*str = '-';
	}
	str[size--] = '\0';
	while (nb != 0)
	{
		str[size--] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (str);
}
