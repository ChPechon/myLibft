/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchawsar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 23:37:46 by jchawsar          #+#    #+#             */
/*   Updated: 2022/10/24 23:46:32 by jchawsar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*strmapi;

	i = -1;
	if (!s)
		return (0);
	strmapi = (char *)ft_calloc(1, ft_strlen(s) + 1);
	if (!strmapi)
		return (NULL);
	while (++i < ft_strlen(s))
		strmapi[i] = f(i, s[i]);
	return (strmapi);
}
