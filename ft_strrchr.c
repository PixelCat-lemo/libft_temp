/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-lemo <pde-lemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 10:06:15 by pde-lemo          #+#    #+#             */
/*   Updated: 2026/11/09 18:43:02 by pde-lemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	most_recent;

	most_recent = -1;
	i = 0;
	if ((unsigned char )c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	while (s[i])
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			most_recent = i;
		i++;
	}
	if (most_recent != -1)
		return ((char *)&s[most_recent]);
	return (NULL);
}
