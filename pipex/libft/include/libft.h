/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhayashi <hhayashi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 17:03:15 by hhayashi          #+#    #+#             */
/*   Updated: 2025/07/24 21:35:12 by hhayashi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_isalnum(int const alnum);
int		ft_isalpha(const int letter);
int		ft_isascii(const int ascii);
int		ft_isdigit(const int digit);
int		ft_isprint(const int print);
int		ft_strlen(const char *str);
void	*ft_memset(void *ptr, int value, unsigned long num);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	ft_bzero(void *s, size_t n);
int		ft_toupper(int c);
int		ft_tolower(int c);
void	*ft_memmove(void *dest, const void *src, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int		ft_atoi(const char *nptr);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strdup(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_putnbr_fd(int n, int fd);
void	ft_args(const char *text, int *count, va_list args);
void	ft_args_char(va_list args);
void	ft_putchar(char c);
int		ft_printf(const char *text, ...);
void	ft_putchar(char c);
void	ft_args_int(va_list args, int *count);
void	ft_args_str(va_list args, int *count);
void	ft_args_uns_int(va_list args, int *count);
void	ft_put_hex(unsigned long hex, int *count, int upper);
char	*ft_uitoa(unsigned int n);
void	ft_args_ptr(va_list args, int *count);

#endif