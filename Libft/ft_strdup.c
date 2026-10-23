/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-lemo <pde-lemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 10:54:53 by pde-lemo          #+#    #+#             */
/*   Updated: 2026/10/23 10:56:07 by pde-lemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(char *src)
{
    char *dest;
    int i;
    int j;

    i = 0;
    j = 0;
    while(src[i])
        i++;
    dest = (char *)malloc(i + 1);
    if (!dest)
        return (NULL);
    while(src[j])
    {
        dest[j] = src[j];
        j++;
    }
    dest[j] = '\0';
    return(dest);
}