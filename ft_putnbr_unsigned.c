/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 14:14:09 by abaioumy          #+#    #+#             */
/*   Updated: 2021/12/08 17:18:52 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_unsigned(unsigned int nbr)
{
	int				len;

	len = 0;
	if (nbr >= 10)
		len += ft_putnbr_unsigned(nbr / 10);
	len += ft_putchar(nbr % 10 + '0');
	return (len);
}
