/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_low.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:05:09 by abaioumy          #+#    #+#             */
/*   Updated: 2021/12/08 18:14:45 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_low(unsigned int n)
{
	char			*base;
	int				len;

	len = 0;
	base = "0123456789abcdef";
	if (n >= 16)
		len += ft_hex_low(n / 16);
	len += ft_putchar(base[n % 16]);
	return (len);
}
