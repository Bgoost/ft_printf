/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmanzan <crmanzan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 13:58:03 by crmanzan          #+#    #+#             */
/*   Updated: 2023/10/05 17:18:57 by crmanzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <printf.h>

int ft_type(const char *c, void *arg)
{
	int	i;

	i = 0;
	if (*c == 'c')
		i += printchar((int)arg);
	else if (*c == 's')
		i += printstr((char *)arg);
		/*
	else if (*c == 'p')

	else if (*c == 'd')

	else if (*c == 'i')

	else if (*c == 'u')

	else if (*c == 'x')

	else  if (*c == 'X')
*/
	return (i);

}

int	ft_printf(char const *str, ...)
{
	va_list	ap;
	int		i;

	i = 0;
	va_start(ap, str);
	while(str)
	{
		if(*str == '%')
		{
			str++;
			if(ft_strchr("cspdiuxX", *str))
				i += ft_type(str, va_arg(ap, void *));
			else if(*str == '%')
				i += ft_putchar('%');/*print %*/
		}
		else
			i += ft_putchar(*str);/*print char*/
		str++;
	}
	va_end(ap);
	return (i);
}

