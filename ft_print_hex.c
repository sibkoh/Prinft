/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-d <amunoz-d@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 12:43:30 by amunoz-d          #+#    #+#             */
/*   Updated: 2022/06/02 12:51:08 by amunoz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_print_hex(unsigned int num)
{
	char	hex[] = "0123456789abcdef";

	if (num >= 16)
		ft_print_hex(num / 16);
	num %= 16;
	ft_putchar(hex[num % 16]);
}
