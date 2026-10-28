/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-lemo <pde-lemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 10:14:44 by pde-lemo          #+#    #+#             */
/*   Updated: 2026/10/28 12:59:26 by pde-lemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	s1;
	int	s2;

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
	return (NULL);
}
