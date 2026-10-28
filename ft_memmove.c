/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-lemo <pde-lemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 11:09:20 by pde-lemo          #+#    #+#             */
/*   Updated: 2026/10/28 12:48:09 by pde-lemo         ###   ########.fr       */
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
