/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirje <mmirje@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 12:53:19 by mmirje            #+#    #+#             */
/*   Updated: 2024/04/20 13:44:08 by mmirje           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptr(uintptr_t t)
{
	int		len;
	char	*values;

	values = "0123456789abcdef";
	if (t < 16)
		return (ft_putchar(values[t]));
	else
	{
		len = ft_ptr(t / 16);
		return (len + ft_ptr(t % 16));
	}
	return (len);
}

int	ft_putptr(uintptr_t ptr)
{
	int	len;

	len = 0;
	len = ft_putstr("0x");
	if (ptr == 0)
		len += ft_putchar('0');
	else
		len += ft_ptr(ptr);
	return (len);
}
