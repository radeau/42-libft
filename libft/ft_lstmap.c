/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpoquita <kpoquita@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 10:38:45 by kpoquita          #+#    #+#             */
/*   Updated: 2021/10/21 10:38:50 by kpoquita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist;
	t_list	*node;

	if (!lst)
		return (NULL);
	newlist = NULL;
	while (lst)
	{
		node = ft_lstnew(f(lst -> content));
		if (!node)
		{
			ft_lstclear(&node, del);
			return (newlist);
		}
		ft_lstadd_back(&newlist, node);
		lst = lst -> next;
	}
	return (newlist);
}
