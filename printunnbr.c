/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printunnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmanzan <crmanzan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:19:26 by crmanzan          #+#    #+#             */
/*   Updated: 2023/10/20 13:30:07 by crmanzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_write_char(char c)
{
	int	result;

	result = printchar(c);
	if (result == -1)
		return (-1);
	return (result);
}

static int	write_digit(int n)
{
	int	result;

	result = check_write_char(n + '0');
	if (result == -1)
		return (-1);
	return (result);
}

unsigned int	printunnbr(unsigned int n)
{
	unsigned int	len;
	unsigned int	tmp;

	len = 0;
	tmp = 0;
	if (n >= 10)
	{
		tmp = printunnbr(n / 10);
		if (tmp == (unsigned int)-1)
			return (-1);
		len += tmp;
	}
	if (write_digit(n % 10) == -1)
		return (-1);
	return (++len);
}
/*
int	main()
{
	printf("\n%u, %u, %u", printnbr2(10), printnbr2(123), -2);
	printf("\n%u, %u, %u", 0, 123, -2);
	return (0);
}*/
