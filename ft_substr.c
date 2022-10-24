/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchawsar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 21:46:05 by jchawsar          #+#    #+#             */
/*   Updated: 2022/10/23 22:19:09 by jchawsar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	thelen;

	if (!s)
		return (NULL);
	thelen = len;
	if (start > ft_strlen(s))
		thelen = 0;
	else if (ft_strlen(s) - start < len)
		thelen = ft_strlen(s) - start;
	substr = (char *)ft_calloc(1, (thelen + 1));
	if (!substr)
		return (NULL);
	i = start;
	while (i < ft_strlen(s) && (i - start) < thelen)
	{
		substr[i - start] = s[i];
		i++;
	}
	return (substr);
}
