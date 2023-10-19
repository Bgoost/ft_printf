/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmanzan <crmanzan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 13:58:03 by crmanzan          #+#    #+#             */
/*   Updated: 2023/10/19 21:00:42 by crmanzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_type(const char *c, void *arg)
{
	int	i;

	i = 0;
	if (*c == 'c')
		i += printchar((int)arg);
	else if (*c == 's')
		i += printstr((char *)arg);
	else if (*c == 'p')
		i += printhexptr((unsigned long)arg, 2);
	else if (*c == 'd')
		i += printnbr((int)arg);
	else if (*c == 'i')
		i += printnbr((int)arg);
	else if (*c == 'u')
		i += printunnbr((unsigned int)arg);
	else if (*c == 'x')
		i += printhexptr((unsigned long)arg, 0);
	else if (*c == 'X')
		i += printhexptr((unsigned long)arg, 1);
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
				if (tmp == -1)
					return (-1);
				final += tmp;
			}
		}
		str++;
	}
	return (final);
}

int	process(const char *str)
{
	int	tmp;
	int	final;

	final = 0;
	while (*str)
	{
		if (*str != '%')
		{
			tmp = printchar(*str);
			if (tmp == -1)
				return (-1);
			final += tmp;
		}
		str++;
	}
	return (final);
}

int	ft_printf(char const *str, ...)
{
	va_list	ap;
	int		result;

	va_start(ap, str);
	result = process(str) + process_specifiers(str, ap);
	va_end(ap);
	return (result);
}
