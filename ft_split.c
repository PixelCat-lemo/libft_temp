/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-lemo <pde-lemo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 13:04:44 by pde-lemo          #+#    #+#             */
/*   Updated: 2026/10/27 13:31:28 by pde-lemo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_merror(char **strs)
{
	int	i;

	i = 0;
	while (strs[i])
	{
		free(strs[i]);
		strs[i] = NULL;
		i++;
	}
	free(strs);
	return (NULL);
}

static int	ft_count_words(const char *s, char c)
{
	int	words;
	int	i;

	words = 0;
	i = 0;
	while (s[i])
	{
		if (i == 0 && s[i] != c)
			words++;
		if (i > 0 && s[i] != c && s[i - 1] == c)
			words++;
		i++;
	}
	return (words);
}

char **ft_split(char const *s, char c)
{
	char **str;
	int word_count;

	word_count = 0;
	if (!s)
	{
		str = malloc(sizeof(char) * 1);
		if (!str)
			return (NULL);
		*str = NULL;
		return (str);
	}
	word_count = ft_count_words(s, c);
	str = malloc(sizeof(*str) * (word_count + 1));
	if (!str)
		return (NULL);
	str[word_count] = NULL;
	ft_merror(str);
	return (str);
}

// (ft_count_words(s, c) + 1) * 

/*
	char	**strs;
	int		wordcount;

	if (!s)
	{
		strs = malloc(sizeof(char) * 1);
		if (!strs)
			return (NULL);
		*strs = NULL;
		return (strs);
	}
	wordcount = ft_count_words(s, c);
	strs = malloc(sizeof(*strs) * (wordcount + 1));
	if (!strs)
		return (NULL);
	if (ft_malloc_strs(strs, s, c))
	{
		ft_cpy_strs(strs, s, c);
		strs[wordcount] = NULL;
	}
	else
		strs = ft_merror(strs);
	return (strs);
*/