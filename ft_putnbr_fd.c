/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agvalero <agvalero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 20:17:55 by agvalero          #+#    #+#             */
/*   Updated: 2024/06/05 18:12:21 by agvalero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	nbr_to_char(int n, int fd)
{
	char	dig;

	if (n / 10 != 0)
		nbr_to_char (n / 10, fd);
	dig = '0' + (n % 10);
	write (fd, &dig, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	if (n == -2147483648)
		write(fd, "2147483648", 10);
	else
		nbr_to_char(n, fd);
}
