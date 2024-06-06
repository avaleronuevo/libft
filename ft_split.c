/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agvalero <agvalero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 09:40:37 by agvalero          #+#    #+#             */
/*   Updated: 2024/06/05 19:50:20 by agvalero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	counter(const char *s, const char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			++count;
			while (*s && *s != c)
				++s;
		}
		else
			++s;
	}
	return (count);
}

static void	free_split(char **split)
{
	size_t	i;

	i = 0;
	while (split[i])
		free(split[i++]);
	free(split);
}

static char	**split(const char *s, const char c, char **index)
{
	size_t	i;
	size_t	len;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				++s;
			index[i++] = ft_substr(s - len, 0, len);
			if (!index[i - 1])
				return (free_split(index), NULL);
		}
		else
			++s;
	}
	index[i] = 0;
	return (index);
}

char	**ft_split(const char *s, char c)
{
	char	**index;
	size_t	words;

	if (!s)
		return (NULL);
	words = counter(s, c);
	index = (char **)malloc(sizeof(char *) * (words + 1));
	if (!index)
		return (NULL);
	index = split(s, c, index);
	return (index);
}
