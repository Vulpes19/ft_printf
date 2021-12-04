/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_low.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:05:09 by abaioumy          #+#    #+#             */
/*   Updated: 2021/12/04 17:11:26 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_low(int nbr)
{
	unsigned int	baselen;
	unsigned int	n;
    char *base;
    int len;

	baselen = 16;
    len = 0;
	base = "0123456789abcdef";
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	n = nbr;
	if (n >= baselen)
	{
		ft_hex_low(n / baselen);
		ft_hex_low(n % baselen);
	}
	if (n < baselen)
		len += ft_putchar(base[n]);
    return (len);
}