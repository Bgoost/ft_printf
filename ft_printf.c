/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmanzan <crmanzan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 13:58:03 by crmanzan          #+#    #+#             */
/*   Updated: 2023/10/20 12:40:19 by crmanzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_type(const char *c, va_list ap)
{
	int	i;

	i = 0;
	if (*c == 'c')
		i += printchar(va_arg(ap, int));
	else if (*c == '%')
		i += printchar((char)'%');
	else if (*c == 's')
		i += printstr(va_arg(ap, char *));
	else if (*c == 'p')
		i += printhexptr(va_arg(ap, unsigned long), 2);
	else if (*c == 'd')
		i += printnbr(va_arg(ap, int));
	else if (*c == 'i')
		i += printnbr(va_arg(ap, int));
	else if (*c == 'u')
		i += printunnbr(va_arg(ap, unsigned int));
	else if (*c == 'x')
		i += printhexptr(va_arg(ap, unsigned int), 0);
	else if (*c == 'X')
		i += printhexptr(va_arg(ap, unsigned int), 1);
	if (i == -1)
		return (-1);
	else
		return (i);
}

int	process_specifiers(const char *str, va_list ap)
{
	int	tmp;
	int	final;

	final = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (ft_strchr("cspdiuxX%", *str))
			{
				tmp = ft_type(str, ap);
				final += tmp;
			}
		}
		else
		{
			tmp = printchar(*str);
			final += tmp;
		}
		if (tmp == -1)
			return (-1);
		str++;
	}
	return (final);
}

int	ft_printf(char const *str, ...)
{
	va_list	ap;
	int		result;

	va_start(ap, str);
	result = process_specifiers(str, ap);
	va_end(ap);
	return (result);
}
/*
int main(void)
{
	ft_printf("%c", '0');
	return 0;
}*/
