/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirje <mmirje@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:00:18 by mmirje            #+#    #+#             */
/*   Updated: 2024/11/05 11:47:09 by mmirje           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <limits.h>
# include <unistd.h>
# include <stdio.h>
# include <stdint.h>

int		ft_printf(const char *str, ...);
char	*ft_strchr(const char *s, int c);
int		ft_putchar(int c);
int		ft_puthex(unsigned int t, char str);
int		ft_putnbr(int n);
int		ft_putptr(uintptr_t ptr);
int		ft_ptr(uintptr_t t);
int		ft_putstr(char *s);
int		ft_putu(unsigned int t);
int		ft_specifier(va_list ptr, char c);

#endif
