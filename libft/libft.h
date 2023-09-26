/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmanzan <crmanzan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:58:05 by crmanzan          #+#    #+#             */
/*   Updated: 2023/09/26 14:57:40 by crmanzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

// -- writes zeroes to a byte string
void	ft_bzero(void *s, size_t n);
//
// -- outut a char or word to a stream (file desc. para el write (x, c, n))
void	ft_putchar_fd(char c, int fd);
//
// -- output as char the int that you choose (file desc. para el write)
void	ft_putnbr_fd(int n, int fd);
//
// -- output a string  (char *) to a stream (file desc. para el write)
void	ft_putstr_fd(char *str, int fd);
//
// -- oput an end of line to the string sended (file desc. para el write)
void	ft_putendl_fd(char *s, int fd);
//
// -- for every char of the str apply the sended ft(uns. int, char *)
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
//
// -- convert a certain bytes of the str(void *b) to the sended int(c)
void	*ft_memset(void *b, int c, size_t len);
//
// -- copy bytes from src to another memory area(dst) WITHOUT OVERLAPING
void	*ft_memcpy(void *dst, const void *src, size_t n);
//
// -- locates the first time c is in the str(*s) and return the pointer
void	*ft_memchr(const void *s, int c, size_t n);
//
// -- copy bytes from src to another memory area(dst) WITH OVERLAPING
void	*ft_memmove(void *dst, const void *src, size_t n);
//
// -- alocates ENOUGH space fot count obj. with size bytes and returns 
// pointer to the allocated memory filled with bytes of value "0"
void	*ft_calloc(size_t count, size_t size);
//
// -- locates FIRST time char(c) is in the str(s), null is part of str
char	*ft_strchr(const char *s, int c);
//
// -- locates LAST time char(c) is in the str(s), null is part of str
char	*ft_strrchr(const char *s, int c);
//
// -- locates first time STR(needle) is in the str(hays), not more than n len
char	*ft_strnstr(const char *h, const char *n, size_t len);
//
// -- returns the str(s) left after subs from start to len
char	*ft_substr(char const *s, unsigned int start, size_t len);
//
// -- returns the two joined str(s1, s2), concatenated
char	*ft_strjoin(char const *s1, char const *s2);
//
// -- allocates sufficient memory for a copy of str(s1), and returns a pointer
char	*ft_strdup(const char *s1);
//
// -- for every char of str(s) apply the sended (f) and returns a new str 
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
//
// -- int to array ALLOWED NEGATIVE nums and return as str the represeted int
char	*ft_itoa(int n);
//
// -- DELETE the str(set) int the start and end of str(s1), returns the new str
char	*ft_strtrim(char const *s1, char const *set);
//
// -- returns an array of arrays from the str(s) and separated by char(c)
char	**ft_split(char const *s, char c);
//
// -- RETURNS 0 if the int(c) is NOT ALPHA-NUMERIC
int		ft_isalnum(int c);
//
// -- RETURNS 0 if the int(c) is NOT ALPHABETIC
int		ft_isalpha(int c);
//
// -- RETURNS 0 if the int(c) is NOT ASCII
int		ft_isascii(int c);
//
// -- RETURNS 0 if the char(c) is NOT DIGIT
int		ft_isdigit(int c);
//
// -- RETURNS 0 if the char(c) is NOT PRINTABLE (> 31 && < 117)
int		ft_isprint(int c);
//
// -- RETURNS the alphabetic ascii c as LOWERCASE (abc..)
int		ft_tolower(int c);
//
// -- RETURNS the alphabetic ascii c as UPPERCASE (ABC..)
int		ft_toupper(int c);
//
// -- compare str(s1, s2), the same == 0
int		ft_strncmp(const char *s1, const char *s2, size_t n);
//
// -- COMPARE str(s1, s2), the same == 0
int		ft_memcmp(const char *s1, const char *s2, size_t n);
//
// -- print as char the int that you choose (file desc. para el write)
int		ft_atoi(const char *str);
//
// -- print as char the int that you choose (file desc. para el write)
size_t	ft_strlen(const char *s);
//
// -- print as char the int that you choose (file desc. para el write)
size_t	ft_strlcat(char *dest, char *src, size_t size);
//
// -- print as char the int that you choose (file desc. para el write)
size_t	ft_strlcpy(char *dest, char *src, size_t size);
//
// -- print as char the int that you choose (file desc. para el write)

#endif
