/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmanzan <crmanzan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:34:00 by crmanzan          #+#    #+#             */
/*   Updated: 2023/09/21 15:30:44 by crmanzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

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

/*
int main () {
   const char str[] = "ht.*tps://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

//	ret = strchr(str, ch);
	ret = ft_strchr(str, ch);
   printf("String after |%c| is - |%s|\n", ch, ret);

   return(0);
}
*/
