/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 20:26:28 by abaioumy          #+#    #+#             */
/*   Updated: 2021/12/09 13:18:18 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(char c)
{
	char	*str;
	int		i;

	i = 0;
	str = "cspdiuxX%";
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	check(char c, va_list list)
{
	int	len;

	len = 0;
	if (c == 'c')
		len += ft_putchar(va_arg(list, int));
	else if (c == 's')
		len += ft_putstr(va_arg(list, char *));
	else if (c == 'd' || c == 'i')
		len += ft_putnbr(va_arg(list, int));
	else if (c == 'u')
		len += ft_putnbr_unsigned(va_arg(list, unsigned int));
	else if (c == 'x')
		len += ft_hex_low(va_arg(list, unsigned int));
	else if (c == 'X')
		len += ft_hex_up(va_arg(list, unsigned int));
	else if (c == 'p')
		len += ft_paddress(va_arg(list, unsigned long long));
	else if (c == '%')
		len += ft_putchar('%');
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		len;
	va_list	list;

	va_start(list, str);
	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] == '%' && ft_check(str[i +1]) == 1)
		{
			i++;
			if (str[i] == '\0')
				return (len);
			len += check(str[i], list);
		}
		else
			len += ft_putchar(str[i]);
		i++;
	}
	va_end(list);
	return (len);
}
