/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirje <mmirje@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:59:31 by mmirje            #+#    #+#             */
/*   Updated: 2024/11/05 11:28:00 by mmirje           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_specifier(va_list ptr, char c)
{
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
		if (*str + i) == '%' && ft_strchr("cspdiuxX%", *(str + i + 1))
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
