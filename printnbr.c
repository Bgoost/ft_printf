/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printnbr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmanzan <crmanzan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:19:26 by crmanzan          #+#    #+#             */
/*   Updated: 2023/10/18 19:05:26 by crmanzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "printf.h"
#include <stdio.h>

int printchar2(char c)
{
	write(1, &c, 1);
	return 1;
}

int	printnbr(int n)
{
	int len;

	len = 0;
	if (n == -2147483648)
	{
		write(1, "-2", 2);
		len += 2;
		n = 147483648;
	}
	if (n < 0)
	{
		len += printchar2('-');
		n = -n;
	}
	if (n >= 10)
	{
		len += printnbr(n / 10);
		len += printchar2(n % 10 + '0');
	}
	if (n < 10)
	{
		len += printchar2(n % 10 + '0');

	}

	return len;
}
/*
int	main()
{
	printf("\n%i, %i, %i", printnbr(3), printnbr(123), printnbr(-2));
	return (0);
}*/
