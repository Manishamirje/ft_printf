/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirje <mmirje@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 12:53:17 by mmirje            #+#    #+#             */
/*   Updated: 2024/04/20 13:59:00 by mmirje           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int		len;

	len = 0;
	if (n == -2147483648)
		return (ft_putstr("-2147483648"));
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
