/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agvalero <agvalero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 19:48:02 by agvalero          #+#    #+#             */
/*   Updated: 2024/06/05 18:13:15 by agvalero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			cc;
	unsigned int	i;

	cc = (char) c;
	i = 0;
	while (s[i] != 0)
		i++;
	while (i > 0)
	{
		if (s[i] == cc)
			return ((char *) &s[i]);
		else
			i--;
	}
	if (s[i] == cc)
		return ((char *) &s[i]);
	else
		return (NULL);
}
