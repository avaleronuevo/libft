/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agvalero <agvalero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 12:33:30 by agvalero          #+#    #+#             */
/*   Updated: 2024/06/05 18:17:59 by agvalero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *tofind, size_t len)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	if (tofind[0] == 0)
		return ((char *)src);
	while (src[i] != 0 && i < len)
	{
		k = 0;
		while (src[i] == tofind[k] && src[i] != 0 && tofind[k] != 0 && i < len)
		{
			i++;
			k++;
		}
		if (tofind[k] == 0)
			return ((char *)&src[i - k]);
		i = i - k + 1;
	}
	return (NULL);
}
