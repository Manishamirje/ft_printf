/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putu.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirje <mmirje@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 12:05:55 by mmirje            #+#    #+#             */
/*   Updated: 2024/11/08 12:05:55 by mmirje           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putu(unsigned int t)
{
	int	len;

	len = 0;
	if (t < 10)
		return (ft_putchar(t + '0'));
	else
	{
		len = ft_putu(t / 10);
		return (len + ft_putu(t % 10));
	}
	return (len);
}
