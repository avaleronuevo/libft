/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agvalero <agvalero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 18:09:47 by agvalero          #+#    #+#             */
/*   Updated: 2024/05/13 19:10:23 by agvalero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	k;
	char	*result;

	result = (char *) ft_calloc(ft_strlen(s1)
			+ ft_strlen(s2) + 1, sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	k = 0;
	while (s1[i])
		result[k++] = s1[i++];
	i = 0;
	while (s2[i])
		result[k++] = s2[i++];
	result[k] = 0;
	return (result);
}
