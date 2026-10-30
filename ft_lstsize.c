/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-lemo <pde-lemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 17:10:08 by pde-lemo          #+#    #+#             */
/*   Updated: 2026/10/30 11:50:17 by pde-lemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	count;
	t_list			*temp;

	count = 0;
	temp = lst;
	while (temp)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
