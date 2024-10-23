/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirje <mmirje@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 12:53:14 by mmirje            #+#    #+#             */
/*   Updated: 2024/04/20 14:24:01 by mmirje           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int t, char str)
{
	int		len;
	char	*values;
	char	*values_x;

	values = "0123456789abcdef";
	values_x = "0123456789ABCDEF";
	if (t < 16)
	{
		if (str == 'x')
			return (ft_putchar(values[t]));
		else
			return (ft_putchar(values_x[t]));
	}
	else
	{
		len = ft_puthex(t / 16, str);
		return (len + ft_puthex(t % 16, str));
	}
	return (len);
}
