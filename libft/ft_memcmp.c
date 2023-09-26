/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmanzan <crmanzan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 18:32:36 by crmanzan          #+#    #+#             */
/*   Updated: 2023/09/21 15:24:07 by crmanzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (a[i] != b[i])
			return (a[i] - b[i]);
		i++;
	}
	if (i != n)
		return (a[i] - b[i]);
	return (0);
}
/*
int main()
{
	printf("memcmp 1: %i\n", ft_memcmp("ass", "ass", 3));
	printf("memcmp 2: %i\n", ft_memcmp("hola", "adios", 4));
	printf("memcmp 3: %i\n", ft_memcmp("asa", "ass", 2));
}*/
