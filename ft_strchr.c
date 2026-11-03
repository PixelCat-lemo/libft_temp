/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-lemo <pde-lemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 09:58:17 by pde-lemo          #+#    #+#             */
/*   Updated: 2026/11/03 14:19:43 by pde-lemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char )c)
			return ((char *)&s[i]);
		i++;
	}
	if ((unsigned char )c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
/*
The  strchr() function returns a pointer to the first occurrence of the
character c in the string s.
*/