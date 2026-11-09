/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-lemo <pde-lemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 13:04:44 by pde-lemo          #+#    #+#             */
/*   Updated: 2026/11/09 13:20:07 by pde-lemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *s, char c)
{
	int	words;
	int	i;

	if (!s)
		return (0);
	words = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			words++;
		i++;
	}
	return (words);
}

static void	ft_free_split(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
}

static int	ft_fill_split(char **str, const char *s, char c)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	if (!str || !s)
		return (0);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			str[j] = ft_substr(s, start, i - start);
			if (!str[j])
				return (0);
			j++;
		}
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**str;

	if (!s)
		return (NULL);
	str = ft_calloc(ft_count_words(s, c) + 1, sizeof(char *));
	if (!str)
		return (NULL);
	if (!ft_fill_split(str, s, c))
	{
		ft_free_split(str);
		return (NULL);
	}
	return (str);
}
