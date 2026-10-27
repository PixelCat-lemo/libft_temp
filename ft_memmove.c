/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-lemo <pde-lemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 11:09:20 by pde-lemo          #+#    #+#             */
/*   Updated: 2026/10/27 11:23:04 by pde-lemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char       *d;
	const unsigned char *s;

	if (src == dest)
		return (dest);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (s < d && s + len > d)
		while (len--)
			*(d + len) = *(s + len);
	else
	{
		while (len--)
		{
			*d = *s;
			s++;
			d++;
		}
	}	
	return (dest);
}
