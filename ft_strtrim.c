/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agvalero <agvalero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 18:20:12 by agvalero          #+#    #+#             */
/*   Updated: 2024/06/05 18:13:25 by agvalero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	to_trim(const char *set, char c)
{
	size_t	t;

	t = 0;
	while (set[t])
	{
		if (c == set[t])
			return (1);
		t++;
	}
	return (0);
}

static char	*new(const char *s1, size_t start, size_t len)
{
	size_t	t;
	char	*new;

	if (len <= 0 || start >= ft_strlen(s1))
		return (ft_strdup(""));
	new = ft_calloc(len + 1, sizeof(char));
	if (!new)
		return (NULL);
	t = 0;
	while (t < len)
	{
		new[t] = s1[start + t];
		t++;
	}
	return (new);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	f;

	i = 0;
	f = ft_strlen(s1) - 1;
	if (!s1 || !set)
		return (ft_strdup(""));
	while (to_trim(set, s1[i]))
		i++;
	while (to_trim(set, s1[f]))
		f--;
	return (new(s1, i, f - (i - 1)));
}
