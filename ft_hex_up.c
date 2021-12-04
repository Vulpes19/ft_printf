/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_up.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:01:59 by abaioumy          #+#    #+#             */
/*   Updated: 2021/12/04 17:11:20 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_up(int nbr)
{
	unsigned int	baselen;
	unsigned int	n;
    int len;
    char *base;

	baselen = 16;
    len = 0;
	base = "0123456789ABCDEF";
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	n = nbr;
	if (n >= baselen)
	{
		ft_hex_up(n / baselen);
		ft_hex_up(n % baselen);
	}
	if (n < baselen)
    {
		len += ft_putchar(base[n]);
    }
    return (len);
}