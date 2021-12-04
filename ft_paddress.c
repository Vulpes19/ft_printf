/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_paddress.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:16:44 by abaioumy          #+#    #+#             */
/*   Updated: 2021/12/04 18:12:08 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_paddress(long nbr)
{
	int	baselen;
	int	n;
    char *base;
    int len;
    
	baselen = 16;
    len = 0;
	base = "0123456789abcdef";
	if (nbr < 0)
	{
		//ft_putchar('-');
		nbr *= -1;
	}
	n = nbr;
	if (n >= baselen)
	{
		ft_paddress(n / baselen);
		ft_paddress(n % baselen);
	}
	if (n < baselen)
    {
        len += ft_putstr("0x");
		len += ft_putchar(base[n]);
    }
    return (len);
}