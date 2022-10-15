/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchawsar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 09:30:09 by jchawsar          #+#    #+#             */
/*   Updated: 2022/10/15 09:56:08 by jchawsar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_negative(int n, int fd)
{
	write (fd, "-", 1);
	return (n * -1);
}

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	char	str[11];

	i = 0;
	if (n == 0)
		write(fd, "0", 1);
	if (n == -2147483648)
		write(fd, "-2147483648", 12);
	if (n < 0)
		n = is_negative(n, fd);
	while (n > 0)
	{
		str[i++] = (n % 10) + '0';
		n = n / 10;
	}
	while (--i >= 0)
		write(fd, &str[i], 1);
}
