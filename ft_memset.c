/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchawsar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 13:37:36 by jchawsar          #+#    #+#             */
/*   Updated: 2022/09/11 10:36:17 by jchawsar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*btmp;

	btmp = (unsigned char *)b;
	while (len > 0)
	{
		btmp[len - 1] = (unsigned char)c;
		len--;
	}
	return (b);
}
