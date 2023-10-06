/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmanzan <crmanzan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:19:26 by crmanzan          #+#    #+#             */
/*   Updated: 2023/10/06 14:34:25 by crmanzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_putfirst(void)
{
	write(1, "0x", 2);
}

static void	ft_putchar_fd(unsigned long n, int shift)
{
	char	*hex;

	if (shift)
		hex = "0123456789ABCDEF";
	else
		hex = "0123456789abcdef";
	write(1, &hex[n], 1);
}

void	printhex(int n, int shift)
{
	if (n >= 10)
	{
		printhex((n / 16), 1);
		ft_putchar_fd(n % 16, shift);
	}
	if (n < 10)
	{
		ft_putchar_fd(n % 16, shift);
	}
}
/*
int	main()
{
	printhex(11, 1);
	write(1, "\n", 1);
	printhex(11, 0);
	return (0);
}*/
