/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirje <mmirje@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:44:13 by mmirje            #+#    #+#             */
/*   Updated: 2024/11/08 11:44:13 by mmirje           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
		return (ft_putptr("-2147483648"));
	else if (n < 0)
	{
		ft_putchar('-');
		return (ft_putnbr(-n) + 1);
	}
	else if (n < 10)
		return (ft_putchar(n + '0'));
	else
	{
		len = ft_putnbr(n / 10);
		return (len + ft_putnbr(n % 10));
	}
	return (len);
}
