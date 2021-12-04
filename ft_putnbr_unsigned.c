/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 14:14:09 by abaioumy          #+#    #+#             */
/*   Updated: 2021/12/04 18:45:29 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ndigits(int nb)
{
	int	count;

	count = 0;
	while (nb)
	{
		nb = nb / 10;
		count++;
	}
	return (count);
}

int	ft_putnbr_unsigned(unsigned int nb)
{
    int nbr;

	nbr = nb;
	if (nb < 0)
	{
		return (4294967287);
	if (nbr >= 10)
		ft_putnbr_unsigned(nbr / 10);
	ft_putchar(nbr % 10 + '0');
    return (ndigits(nb));
}