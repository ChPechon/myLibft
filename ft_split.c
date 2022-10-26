/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchawsar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 21:53:22 by jchawsar          #+#    #+#             */
/*   Updated: 2022/10/26 22:43:28 by jchawsar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wc(char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

static char	**ft_free(char **ans, size_t i)
{
	while (--i >= 0 && ans[i])
	{
		free(ans[i]);
		ans[i] = NULL;
	}
	free(ans);
	ans = NULL;
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**ans;
	char	*from;
	size_t	i;

	if (!s)
		return (NULL);
	ans = ft_calloc(1, sizeof(char *) * (ft_wc((char *)s, c) + 1));
	if (!ans)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			from = (char *)s;
			while (*s && *s != c)
				s++;
			ans[i] = ft_substr(from, 0, (s - from));
			if (!ans[i++])
				return (ft_free(ans, i));
		}
		else
			s++;
	}
	return (ans);
}
