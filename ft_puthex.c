/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmanzan <crmanzan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:19:26 by crmanzan          #+#    #+#             */
/*   Updated: 2023/09/26 18:43:38 by crmanzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

static void	ft_putfirst(void)
{
	write(1, "0x", 2);
}

static void	ft_putchar_fd(unsigned long n, int fd)
{
	char	*hex;

	hex = "0123456789abcdef";
	write(fd, &hex[n], 1);
}

void	ft_puthex(int n)
{
	if (n >= 10)
	{
		ft_putnbr_fd(n / 16);
		ft_putchar_fd(n % 16, 1);
	}
	if (n < 10)
	{
		ft_putchar_fd(n % 16, 1);
	}
}
/*
int	main()
{
	ft_putnbr_fd(1, 1);
	ft_putnbr_fd(-2, 1);
	return (0);
}*/
