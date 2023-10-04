/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmanzan <crmanzan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 13:58:03 by crmanzan          #+#    #+#             */
/*   Updated: 2023/10/04 18:41:18 by crmanzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdarg.h>
int ft_type(const char *c, void *type)
{
	int	i;

	i = 0;
	if (*c == 'c')

	else if (*c == 's')

	else if (*c == 'p')

	else if (*c == 'd')

	else if (*c == 'i')

	else if (*c == 'u')

	else if (*c == 'x')

	else  if (*c == 'X')

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
				i += 1;/*print %*/
		}
		else
			i += 1;/*print char*/
		str++;
	}
	va_end(ap);
	return (i);
}

