/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agvalero <agvalero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 19:48:02 by agvalero          #+#    #+#             */
/*   Updated: 2024/06/05 18:11:29 by agvalero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	tmp_c;
	unsigned char	*tmp_str;
	size_t			i;

	tmp_str = (unsigned char *) str;
	tmp_c = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (tmp_str[i] == tmp_c)
		{
			return ((void *) &tmp_str[i]);
		}
		i++;
	}
	return (NULL);
}
