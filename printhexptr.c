/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printhexptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmanzan <crmanzan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:16:22 by crmanzan          #+#    #+#             */
/*   Updated: 2023/10/18 19:02:26 by crmanzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	putchar(char c)
{
	write(1, &c, 1);
}

static int	ft_hexptrlen(unsigned long n)
{
	int	len;

	len =0;
	while (n != 0)
	{
		len++;
		n /= 16;
	}
	return (len);
}

static void ft_puthexptr(unsigned long n, int shift)
{
	if (n >= 16)
	{
		ft_puthexptr(n / 16, shift);
		ft_puthexptr(n % 16, shift);
	}
	else
	{
		if (n < 10)
			putchar(n + '0');
		else
		{
			if (shift != 1)
				putchar(n - 10 + 'a');
			else
				putchar(n - 10 + 'A');
		}
	}
}

int	printhexptr(unsigned long hex, int shift)
{
	int	len;

	len = 0;
	if (shift == 2)
		len += write(1, "0x", 2);
	if (!hex)
		len += write(1, "0", 1);
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
	printhexptr((unsigned long)11, 0);
	printhexptr((unsigned long)11, 1);
	printhexptr((unsigned long)(void *)11, 2);
}*/
