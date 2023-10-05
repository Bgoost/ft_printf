/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmanzan <crmanzan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 14:09:54 by crmanzan          #+#    #+#             */
/*   Updated: 2023/10/05 17:44:40 by crmanzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <libft.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(char const *, . . .);
int	printchar(char c);
int printptr(unsigned long long ptr);
int	printstr(char *str);
