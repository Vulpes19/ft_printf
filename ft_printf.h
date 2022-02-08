/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaioumy <abaioumy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 20:31:04 by abaioumy          #+#    #+#             */
/*   Updated: 2021/12/08 17:27:15 by abaioumy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int	ft_printf(const char *str, ...);
int	ft_putchar(char c);
int	ft_putnbr(int nbr);
int	ft_putnbr_unsigned(unsigned int nb);
int	ft_hex_low(unsigned int n);
int	ft_hex_up(unsigned int nbr);
int	ft_paddress(unsigned long long nbr);
int	ft_putstr(char *str);

#endif
