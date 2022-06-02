/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_putnbr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-d <amunoz-d@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 11:06:03 by amunoz-d          #+#    #+#             */
/*   Updated: 2022/06/02 12:09:06 by amunoz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_print_putnbr(unsigned int num)
{
	unsigned int	i;

	i = 0;
	if (num > 9)
	{
		ft_print_putnbr(num / 10);
		ft_print_putnbr(num % 10);
	}
	else
		ft_putchar(num + '0');
		i++;
}
