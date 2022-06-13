/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_putnbr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-d <amunoz-d@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:06:03 by amunoz-d          #+#    #+#             */
/*   Updated: 2022/06/13 10:25:29 by amunoz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_putnbr(unsigned int num)
{
	unsigned int	i;

	i = 1;
	if (num > 9)
	{
		i = ft_print_putnbr(num / 10);
		i += ft_print_putnbr(num % 10);
	}
	else
		ft_putchar(num + '0');
	return (i);
}
