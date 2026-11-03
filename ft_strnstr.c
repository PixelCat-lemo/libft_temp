/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-lemo <pde-lemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 10:14:44 by pde-lemo          #+#    #+#             */
/*   Updated: 2026/11/03 14:39:53 by pde-lemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	s1;
	size_t	s2;

	s1 = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (s1 < len && big[s1])
	{
		s2 = 0;
		while (little[s2] && (s1 + s2 < len) && (big[s1 + s2] == little[s2]))
		{
			s2++;
		}
		if (little[s2] == '\0')
			return ((char *)&big[s1]);
		s1++;
	}
	return (0);
}
/*
The strnstr() function locates the first occurrence of the null-termi‐
nated string little in the string big, where not more than len characters
are searched.  Characters that appear after a ‘\0’ character are not
searched.  Since the strnstr() function is a FreeBSD specific API, it
should only be used when portability is not a concern.
*/