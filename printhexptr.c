/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printhexptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmanzan <crmanzan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:16:22 by crmanzan          #+#    #+#             */
/*   Updated: 2023/10/20 12:23:59 by crmanzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>
#include <stdio.h>

static int	ft_hexptrlen(unsigned long n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		len++;
		n /= 16;
	}
	return (len);
}

static void	ft_puthexptr(unsigned long n, int shift)
{
	if (n >= 16)
	{
		ft_puthexptr(n / 16, shift);
		ft_puthexptr(n % 16, shift);
	}
	else
	{
		if (n < 10)
			printchar(n + '0');
		else
		{
			if (shift != 1)
				printchar(n - 10 + 'a');
			else
				printchar(n - 10 + 'A');
		}
	}
}

int	printhexptr(unsigned long hex, int shift)
{
	int	len;
	int	tmp;

	len = 0;
	tmp = 0;
	if (shift == 2)
	{
		tmp = write(1, "0x", 2);
		if (tmp == -1)
			return (-1);
		len += tmp;
	}
	if (!hex)
	{
		tmp = write(1, "0", 1);
		if (tmp == -1)
			return (-1);
		len += tmp;
	}
	else
	{
		ft_puthexptr(hex, shift);
		len += ft_hexptrlen(hex);
	}
	return (len);
}
/*
int main()
{
	printf("\n%x, %x", INT_MAX, printhexptr(INT_MAX, 0));
	//printhexptr((unsigned long)11, 0);
	//printhexptr((unsigned long)11, 1);
	//printhexptr((unsigned long)(void *)11, 2);
}*/
