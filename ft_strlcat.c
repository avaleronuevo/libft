/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agvalero <agvalero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:46:13 by agvalero          #+#    #+#             */
/*   Updated: 2024/06/05 18:12:48 by agvalero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	len_src;
	size_t	len_dest;

	len_src = ft_strlen(src);
	len_dest = ft_strlen(dest);
	if (len_dest >= size)
		len_dest = size;
	if (len_dest == size)
		return (size + len_src);
	if (len_src < size - len_dest)
	{
		ft_memcpy(dest + len_dest, src, len_src + 1);
	}
	else
	{
		ft_memcpy(dest + len_dest, src, size - len_dest - 1);
		dest[size - 1] = 0;
	}
	return (len_src + len_dest);
}
