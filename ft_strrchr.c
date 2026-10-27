/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-lemo <pde-lemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 10:06:15 by pde-lemo          #+#    #+#             */
/*   Updated: 2026/10/23 10:11:52 by pde-lemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    int i;
    int most_recent;

    most_recent = 0;
    i = 0;
    while (s[i])
    {
        if (s[i] == (char)c)
            most_recent = i;
        i++;
    }
    if ((char)c == '\0')
        return ((char *)&s[i]);
    if (most_recent != -1)
        return ((char *)&s[most_recent]);
    return(NULL);
}