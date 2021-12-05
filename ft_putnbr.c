/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 12:35:18 by abaioumy          #+#    #+#             */
/*   Updated: 2021/12/05 18:06:32 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	int	nbr;
	int	len;

	len = 0;
	if (nb < 0)
	{
		len += ft_putchar('-');
		if (nb == -2147483648)
		{
			write(1, "2147483648", 10);
			return (len + 10);
		}		
		nbr = nb * -1;
	}
	else
		nbr = nb;
	if (nbr >= 10)
		len += ft_putnbr(nbr / 10);
	len += ft_putchar(nbr % 10 + '0');
	return (len);
}
