/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmanzan <crmanzan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:07:08 by crmanzan          #+#    #+#             */
/*   Updated: 2023/10/19 20:46:23 by crmanzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <printf.h>
#include <unistd.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;
	int	flag;

	flag = 0;
	i = 0;
	while (((char *)s)[i] != '\0' && flag == 0)
	{
		if (((char *)s)[i] == (char)c)
		{
			return ((char *)&s[i]);
			flag = 1;
		}
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (0);
}

int	printchar(char c)
{
	if (write(1, &c, 1) == -1)
		return (-1);
	return (1);
}

int	printstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
	{
		if (write(1, "(null)", 6) == -1)
			return (-1);
		return (6);
	}
	while (str[i])
	{
		if (write(1, &str[i], 1) == -1)
			return (-1);
		i++;
	}
	return (i);
}
