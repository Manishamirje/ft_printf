/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putu.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirje <mmirje@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 12:53:25 by mmirje            #+#    #+#             */
/*   Updated: 2024/04/20 12:56:02 by mmirje           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putu(unsigned int t)
{
	int		len;

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
