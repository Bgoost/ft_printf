/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printnbr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmanzan <crmanzan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:19:26 by crmanzan          #+#    #+#             */
/*   Updated: 2023/10/19 21:01:27 by crmanzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_write_char(char c)
{
	int	result;

	result = printchar(c);
	if (result == -1)
		return (-1);
	return (result);
}

int	write_digit(int n)
{
	return (check_write_char(n + '0'));
}

int	printnbr(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
	{
		if (write(1, "-2147483648", 11) == -1)
			return (-1);
		return (11);
	}
	if (n < 0)
	{
		if (printchar('-') == -1)
			return (-1);
		n = -n;
		len++;
	}
	if (n >= 10)
	{
		len += printnbr(n / 10);
	}
	if (write_digit(n % 10) == -1)
		return (-1);
	return (++len);
}
/*
int	main()
{
	printf("\n%i, %i, %i", printnbr(0), printnbr(123), printnbr(-2));
	printf("\n%i, %i, %i", 0, 123, -2);
	return (0);
}*/
