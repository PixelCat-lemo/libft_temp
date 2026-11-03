/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-lemo <pde-lemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 11:09:20 by pde-lemo          #+#    #+#             */
/*   Updated: 2026/11/03 11:56:05 by pde-lemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char		*dst;
	const unsigned char	*orig;

	if (src == dest)
		return (dest);
	dst = (unsigned char *)dest;
	orig = (const unsigned char *)src;
	if (orig < dst && orig + len > dst)
		while (len--)
			*(dst + len) = *(orig + len);
	else
	{
		while (len--)
		{
			*dst = *orig;
			orig++;
			dst++;
		}
	}
	return (dest);
}
/*
The  memmove()  function  copies n bytes from memory area src to memory
       area dest.  The memory areas may overlap: copying takes place as though
       the  bytes in src are first copied into a temporary array that does not
       overlap src or dest, and the bytes are then copied from  the  temporary
       array to dest.
*/