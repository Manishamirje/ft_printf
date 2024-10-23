/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirje <mmirje@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 12:51:37 by mmirje            #+#    #+#             */
/*   Updated: 2024/04/20 14:38:20 by mmirje           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <limits.h>
# include <stdint.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
int		ft_specifier(va_list argsptr, char c);
int		ft_putchar(int c);
int		ft_puthex(unsigned int t, char str);
int		ft_putnbr(int n);
int		ft_putptr(uintptr_t ptr);
int		ft_ptr(uintptr_t t);
int		ft_putstr(char *s);
int		ft_putu(unsigned int t);
char	*ft_strchr(const char *s, int c);

#endif
