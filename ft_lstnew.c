/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchawsar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:30:05 by jchawsar          #+#    #+#             */
/*   Updated: 2022/10/26 16:30:08 by jchawsar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ans;

	ans = malloc (sizeof(t_list));
	if (!ans)
		return (NULL);
	ans -> content = content;
	ans -> next = NULL;
	return (ans);
}
