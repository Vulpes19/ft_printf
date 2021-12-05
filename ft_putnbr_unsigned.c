/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 14:14:09 by abaioumy          #+#    #+#             */
/*   Updated: 2021/12/05 18:07:46 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_unsigned(unsigned int nb)
{
	unsigned int	nbr;
	int				len;

	nbr = nb;
	len = 0;
	if (nb == 0)
	{
		len += ft_putchar(nb + '0');
		return (len);
	}
	if (nbr < 0)
	{
		write(1, "4294967287", 10);
		return (10);
	}
	if (nbr >= 10)
		len += ft_putnbr_unsigned(nbr / 10);
	len += ft_putchar(nbr % 10 + '0');
	return (len);
}
