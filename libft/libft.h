/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crmanzan <crmanzan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 14:58:05 by crmanzan          #+#    #+#             */
/*   Updated: 2023/10/04 18:24:34 by crmanzan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

// [[[[[[  -- BZERO --  ]]]]]]
void	ft_bzero(void *s, size_t n);
// -- writes zeroes to a byte string

// [[[[[[  -- PUTCHAR --  ]]]]]]
void	ft_putchar_fd(char c, int fd);
// -- outut a char or word to a stream (file desc. para el write (x, c, n))

// [[[[[[  -- PUTNBR --  ]]]]]]
void	ft_putnbr_fd(int n, int fd);
// -- output as char the int that you choose (file desc. para el write)

// [[[[[[  -- PUTSTR --  ]]]]]]
void	ft_putstr_fd(char *str, int fd);
// -- output a string  (char *) to a stream (file desc. para el write)

// [[[[[[  -- PUTEND --  ]]]]]]
void	ft_putendl_fd(char *s, int fd);
// -- oput an end of line to the string sended (file desc. para el write)

// [[[[[[  -- STRITERI --  ]]]]]]
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
// -- for every char of the str apply the sended ft(uns. int, char *)

// [[[[[[  -- MEMSET --  ]]]]]]
void	*ft_memset(void *b, int c, size_t len);
// -- convert a certain bytes of the str(void *b) to the sended int(c)

// [[[[[[  -- MEMCPY --  ]]]]]]
void	*ft_memcpy(void *dst, const void *src, size_t n);
// -- copy bytes from src to another memory area(dst) WITHOUT OVERLAPING

// [[[[[[  -- MEMCHR --  ]]]]]]
void	*ft_memchr(const void *s, int c, size_t n);
// -- locates the first time c is in the str(*s) and return the pointer

// [[[[[[  -- MEMMOVE --  ]]]]]]
void	*ft_memmove(void *dst, const void *src, size_t n);
// -- copy bytes from src to another memory area(dst) WITH OVERLAPING

// [[[[[[  -- CALLOC --  ]]]]]]
void	*ft_calloc(size_t count, size_t size);
// -- alocates ENOUGH space fot count obj. with size bytes and returns 
// pointer to the allocated memory filled with bytes of value "0"

// [[[[[[  -- STRCHR --  ]]]]]]
char	*ft_strchr(const char *s, int c);
// -- locates FIRST time char(c) is in the str(s), null is part of str

// [[[[[[  -- STRRCHR --  ]]]]]]
char	*ft_strrchr(const char *s, int c);
// -- locates LAST time char(c) is in the str(s), null is part of str

// [[[[[[  -- STRNSTR --  ]]]]]]
char	*ft_strnstr(const char *h, const char *n, size_t len);
// -- locates first time STR(needle) is in the str(hays), not more than n len

// [[[[[[  -- SUBS --  ]]]]]]
char	*ft_substr(char const *s, unsigned int start, size_t len);
// -- returns the str(s) left after subs from start to len

// [[[[[[  -- JOIN --  ]]]]]]
char	*ft_strjoin(char const *s1, char const *s2);
// -- returns the two joined str(s1, s2), concatenated

// [[[[[[  -- DUP --  ]]]]]]
char	*ft_strdup(const char *s1);
// -- allocates sufficient memory for a copy of str(s1), and returns a pointer

// [[[[[[  -- STRMAPI --  ]]]]]]
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
// -- for every char of str(s) apply the sended (f) and returns a new str 

// [[[[[[  -- ITOA --  ]]]]]]
char	*ft_itoa(int n);
// -- int to array ALLOWED NEGATIVE nums and return as str the represeted int

// [[[[[[  -- TRIM --  ]]]]]]
char	*ft_strtrim(char const *s1, char const *set);
// -- DELETE the str(set) int the start and end of str(s1), returns the new str

// [[[[[[  -- SPLIT --  ]]]]]]
char	**ft_split(char const *s, char c);
// -- returns an array of arrays from the str(s) and separated by char(c)

// [[[[[[  -- ISALNUM --  ]]]]]]
int		ft_isalnum(int c);
// -- RETURNS 0 if the int(c) is NOT ALPHA-NUMERIC

// [[[[[[  -- ISALPHA --  ]]]]]]
int		ft_isalpha(int c);
// -- RETURNS 0 if the int(c) is NOT ALPHABETIC

// [[[[[[  -- ISASCII --  ]]]]]]
int		ft_isascii(int c);
// -- RETURNS 0 if the int(c) is NOT ASCII

// [[[[[[  -- ISDIGIT --  ]]]]]]
int		ft_isdigit(int c);
// -- RETURNS 0 if the char(c) is NOT DIGIT

// [[[[[[  -- ISPRINT --  ]]]]]]
int		ft_isprint(int c);
// -- RETURNS 0 if the char(c) is NOT PRINTABLE (> 31 && < 117)

// [[[[[[  -- LOWER --  ]]]]]]
int		ft_tolower(int c);
// -- RETURNS the alphabetic ascii c as LOWERCASE (abc..)

// [[[[[[  --UPPER --  ]]]]]]
int		ft_toupper(int c);
// -- RETURNS the alphabetic ascii c as UPPERCASE (ABC..)

// [[[[[[  -- STRNCMP --  ]]]]]]
int		ft_strncmp(const char *s1, const char *s2, size_t n);
// -- compare str(s1, s2), the same == 0

// [[[[[[  -- MEMCMP --  ]]]]]]
int		ft_memcmp(const char *s1, const char *s2, size_t n);
// -- COMPARE str(s1, s2), the same == 0, W.O KNOWING TYPE OF STR

// [[[[[[  -- ATOI --  ]]]]]]
int		ft_atoi(const char *str);
// -- array to int

// [[[[[[  -- STRLEN --  ]]]]]]
size_t	ft_strlen(const char *s);
// -- RETURNS len of the str(s)

// [[[[[[  -- STRLCAT --  ]]]]]]
size_t	ft_strlcat(char *dest, char *src, size_t size);
// -- CONCATENATES str(src to dest)

// [[[[[[  -- STRLCPY --  ]]]]]]
size_t	ft_strlcpy(char *dest, char *src, size_t size);
// -- COPIES str(src) to dest (overwritting what is in dest)

#endif
