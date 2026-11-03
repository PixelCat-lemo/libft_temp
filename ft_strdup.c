/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-lemo <pde-lemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 10:54:53 by pde-lemo          #+#    #+#             */
/*   Updated: 2026/11/03 14:20:06 by pde-lemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;
	int		len;
	int		j;

	len = 0;
	j = 0;
	while (src[len])
		len++;
	dest = (char *)malloc(len + 1);
	if (!dest)
		return (NULL);
	while (src[j])
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
/*
The  strdup() function returns a pointer to a new string which is a du‐
plicate of the string s.  Memory for the new string  is  obtained  with
malloc(3), and can be freed with free(3).
*/