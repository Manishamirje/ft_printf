/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirje <mmirje@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 12:53:05 by mmirje            #+#    #+#             */
/*   Updated: 2024/04/20 14:37:40 by mmirje           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_specifier(va_list argsptr, char c)
{
	if (c == 'c')
		return (ft_putchar(va_arg(argsptr, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(argsptr, char *)));
	else if (c == 'p')
		return (ft_putptr(va_arg(argsptr, uintptr_t)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(argsptr, int)));
	else if (c == 'u')
		return (ft_putu(va_arg(argsptr, unsigned int)));
	else if (c == 'x' || c == 'X')
		return (ft_puthex(va_arg(argsptr, unsigned int), c));
	else if (c == '%')
		return (ft_putchar(37));
	else
		return (-1);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		len;
	va_list	argsptr;

	i = 0;
	len = 0;
	va_start(argsptr, str);
	while (*(str + i) != '\0')
	{
		if (*(str + i) == '%' && ft_strchr("cspdiuxX%", *(str + i + 1)))
		{
			len += ft_specifier(argsptr, *(str + i + 1));
			i++;
		}
		else
			len += ft_putchar(*(str + i));
		i++;
	}
	va_end(argsptr);
	return (len);
}

/*int	main(void)
{
	unsigned int		a;
	void				*p;
	int					count;

	a = 12346789;
	p = &a;
	count = ft_printf("printing from ft_printf : %x :\n", a);
	ft_printf("printing from ft_printf : %x :\n", a);
	printf("count :%d:\n", count);
	count = printf("printing from    printf : %x :\n", a);
	printf("printing from printf : %x :\n", a);
	printf("count :%d:\n", count);
	ft_printf("printing p from ft_printf: %p\n", p);
	printf("printing p from printf: %p\n", p);
	return (0);
}*/
