/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printchar.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmanzan <crmanzan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 20:51:40 by crmanzan          #+#    #+#             */
/*   Updated: 2023/10/20 12:31:30 by crmanzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
//#include <stdio.h>
//#include <unistd.h>

int	printchar(char c)
{
	int	result;

	result = write(1, &c, 1);
	if (result == -1)
		return (-1);
	return (result);
}
/*
int main(){
	printf("\n %i, %i", 'a', printchar('a'));
	printf("\n %i, %i", 'b', printchar('b'));
	printf("\n %i, %i", 'c', printchar('c'));
	printf("\n %i, %i", 'd', printchar('d'));
	printf("\n %i, %i", 'e', printchar('e'));
}*/
