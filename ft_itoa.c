/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agvalero <agvalero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 18:07:48 by agvalero          #+#    #+#             */
/*   Updated: 2024/06/05 18:11:01 by agvalero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	digits(int n)
{
	size_t	len;
	int		tmp;

	len = 0;
	tmp = n;
	if (tmp <= 0)
		len++;
	while (tmp != 0)
	{
		tmp = tmp / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*result;
	size_t			len;
	unsigned int	num;

	len = digits(n);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (n < 0)
	{
		num = (unsigned int)(-n);
		result[0] = '-';
	}
	else
		num = (unsigned int)n;
	if (n == 0)
		result[0] = '0';
	while (num != 0)
	{
		result[--len] = (num % 10) + 48;
		num = num / 10;
	}
	return (result);
}
