/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmanzan <crmanzan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 16:46:29 by crmanzan          #+#    #+#             */
/*   Updated: 2023/10/18 18:39:01 by crmanzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <printf.h>

int	printstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while(str[i])
	{
		if (write(1, &str[i], 1) == -1)
			return (-1);
		else
		{
			write(1, &str[i], 1);
			i++;
		}
	}
	return (i);
}
