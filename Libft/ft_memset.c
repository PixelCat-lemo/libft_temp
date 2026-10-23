/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-lemo <pde-lemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 15:57:09 by pde-lemo          #+#    #+#             */
/*   Updated: 2026/10/22 16:33:55 by pde-lemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *s, int c, size_t len)
{
    int i;

    i = 0;
    while (i < len)
    {
        // *(unsigned char*)(s + i) = (unsigned char)c;
		i++;
    }
    return(s);
}