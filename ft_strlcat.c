/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchawsar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 00:01:25 by jchawsar          #+#    #+#             */
/*   Updated: 2022/10/15 09:28:13 by jchawsar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len;

	len = ft_strlen(dst);
	if (len >= dstsize)
		return (dstsize + ft_strlen(src));
	while (*src && len < dstsize - 1)
	{
		*(dst + len) = *src++;
		len++;
	}
	*(dst + len) = '\0';
	return (len + ft_strlen(src));
}
