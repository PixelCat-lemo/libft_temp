/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-lemo <pde-lemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 10:14:05 by pde-lemo          #+#    #+#             */
/*   Updated: 2026/10/30 14:52:57 by pde-lemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_l;
	t_list	*new_o;

	if (!lst || !f)
		return (NULL);
	new_l = NULL;
	while (lst)
	{
		new_o = ft_lstnew(f(lst->content));
		if (!new_o)
		{
			ft_lstclear(&new_l, del);
			return (NULL);
		}
		ft_lstadd_back(&new_l, new_o);
		lst = lst->next;
	}
	return (new_l);
}
