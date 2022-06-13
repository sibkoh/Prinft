/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-d <amunoz-d@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 12:43:30 by amunoz-d          #+#    #+#             */
/*   Updated: 2022/06/13 10:32:34 by amunoz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned int num)
{
	char	*hex;
	int		i;

	hex = "0123456789abcdef";
	i = 1;
	if (num >= 16)
	{
		i += ft_print_hex(num / 16);
	}
	num %= 16;
	ft_putchar(hex[num % 16]);
	return (i);
}
