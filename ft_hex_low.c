/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_low.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:05:09 by abaioumy          #+#    #+#             */
/*   Updated: 2021/12/05 17:58:50 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_low(int nbr)
{
	unsigned int	baselen;
	unsigned int	n;
	char			*base;
	int				len;

	baselen = 16;
	len = 0;
	base = "0123456789abcdef";
	n = nbr;
	if (n >= baselen)
	{
		len += ft_hex_low(n / baselen);
		len += ft_hex_low(n % baselen);
	}
	if (n < baselen)
		len += ft_putchar(base[n]);
	return (len);
}
