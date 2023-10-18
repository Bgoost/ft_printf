/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmanzan <crmanzan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:09:54 by crmanzan          #+#    #+#             */
/*   Updated: 2023/10/18 17:51:59 by crmanzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

//# include "libft.h"
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int	ft_printf(char const *str, ...);
int	printchar(char c);
int	printstr(char *str);
int	printhexptr(unsigned long hex, int shift);
int printnbr(int n);
char	*ft_strchr(const char *s, int c);
#endif