/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchawsar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 21:39:38 by jchawsar          #+#    #+#             */
/*   Updated: 2022/10/24 21:39:33 by jchawsar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*strjoin;

	if (!s1 || !s2)
		return (NULL);
	len1 = (size_t)ft_strlen(s1);
	len2 = (size_t)ft_strlen(s2);
	strjoin = (char *)ft_calloc(1, (len1 + len2 + 1));
	if (!strjoin)
		return (NULL);
	ft_memcpy(strjoin, s1, len1);
	ft_memcpy(strjoin + len1, s2, len2);
	return (strjoin);
}
