/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmanzan <crmanzan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 13:58:03 by crmanzan          #+#    #+#             */
/*   Updated: 2023/10/18 19:06:08 by crmanzan         ###   ########.fr       */
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
	else if (*c == 'p')
		i += printhexptr((unsigned long)arg, 2);
	else if (*c == 'd')
		return 0;
	else if (*c == 'i')
		i += printnbr((int)arg);
	else if (*c == 'u')
		return 0;

	else if (*c == 'x')
		i += printhexptr((unsigned long)arg, 0);
	else  if (*c == 'X')
		i += printhexptr((unsigned long)arg, 1);

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
				i += printchar('%');/*print %*/
		}
		else
			i += printchar(*str);/*print char*/
		str++;
	}
	va_end(ap);
	return (i);
}

