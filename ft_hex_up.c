/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_up.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 16:01:59 by abaioumy          #+#    #+#             */
/*   Updated: 2021/12/08 17:25:24 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_up(unsigned int n)
{
	int				len;
	char			*base;

	len = 0;
	base = "0123456789ABCDEF";
	if (n >= 16)
		len += ft_hex_up(n / 16);
	len += ft_putchar(base[n % 16]);
	return (len);
}
