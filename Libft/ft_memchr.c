/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-lemo <pde-lemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 11:39:15 by pde-lemo          #+#    #+#             */
/*   Updated: 2026/10/27 11:49:19 by pde-lemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	The  memchr()  function  scans  the  initial n bytes of the memory area
    pointed to by s for the first instance of c.  Both c and the  bytes  of
    the memory area pointed to by s are interpreted as unsigned char.

	The  memchr()  and memrchr() functions return a pointer to the matching
    byte or NULL if the character does not occur in the given memory area.
*/

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	size_t				i;

	str = (const unsigned char *)s;
	i = 0;
    while (i < n)
    {
        if (str[i] == (unsigned char)c)
            return((void *)&str[i]);
        i++;
    }
    return(NULL);
}
