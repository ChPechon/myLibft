/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchawsar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 21:09:24 by jchawsar          #+#    #+#             */
/*   Updated: 2022/10/26 21:39:26 by jchawsar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*map;
	t_list	*mapnext;
	t_list	*node;

	if (!lst || !f)
		return (NULL);
	map = ft_lstnew(f(lst -> content));
	if (!map)
		return (NULL);
	mapnext = map;
	node = lst -> next;
	while (node != NULL)
	{
		mapnext -> next = ft_lstnew(f(node -> content));
		if (!mapnext)
		{
			ft_lstclear(&map, del);
			return (NULL);
		}
		node = node -> next;
		mapnext = mapnext -> next;
	}
	return (map);
}
