/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchawsar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 21:35:13 by jchawsar          #+#    #+#             */
/*   Updated: 2022/10/24 22:12:31 by jchawsar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_digit_count(long long n)
{
	size_t	digit;

	digit = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		digit++;
		n = -n;
	}
	while (n > 0)
	{
		digit++;
		n = n / 10;
	}
	return (digit);
}

char	*ft_itoa(int n)
{
	char		*itoa;
	size_t		digit;
	long long	nbr;

	nbr = n;
	digit = ft_digit_count(nbr);
	itoa = (char *)ft_calloc(1, digit + 1);
	if (!itoa)
		return (NULL);
	if (nbr < 0)
	{
		itoa[0] = '-';
		nbr = -nbr;
	}
	digit--;
	if (nbr == 0)
		itoa[0] = '0';
	while (nbr > 0)
	{
		itoa[digit--] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	return (itoa);
}
