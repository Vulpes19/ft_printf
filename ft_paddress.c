/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_paddress.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:16:44 by abaioumy          #+#    #+#             */
/*   Updated: 2021/12/08 18:15:20 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_hex(unsigned long long n)
{
	char	*base;
	int		len;

	len = 0;
	base = "0123456789abcdef";
	if (n >= 16)
		len += ft_hex(n / 16);
	len += ft_putchar(base[n % 16]);
	return (len);
}

int	ft_paddress(unsigned long long nbr)
{
	int	len;

	len = 0;
	len += ft_putstr("0x");
	len += ft_hex(nbr);
	return (len);
}
