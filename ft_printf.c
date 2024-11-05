/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirje <mmirje@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:59:31 by mmirje            #+#    #+#             */
/*   Updated: 2024/11/05 11:44:30 by mmirje           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_specifier(va_list ptr, char c)
{
	if (c == 'c')
		return (ft_putchar(va_arg(ptr, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(ptr, char *)));
	else if (c == 'p')
		return (ft_putptr(va_arg(ptr, uintptr_t)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(ptr, int)));
	else if (c == 'u')
		return (ft_putu(va_arg(ptr, unsigned int)));
	else if (c == 'x' || c == 'X')
		return (ft_puthex(va_arg(ptr, unsigned int), c));
	else if (c == '%')
		return (ft_putchar(37));
	else
		return (-1);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		len;
	va_list	ptr;

	i = 0;
	len = 0;
	va_start(ptr, str);
	while (*(str + i) != '\0')
	{
		if (*(str + i) == '%' && ft_strchr("cspdiuxX%", *(str + i + 1)))
		{
			len += ft_specifier(ptr, *(str + i + 1));
			i++;
		}
		else
			len += ft_putchar(*(str + i));
		i++;
	}
	va_end(ptr);
	return (len);
}
