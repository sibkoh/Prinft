/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-d <amunoz-d@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 11:18:57 by amunoz-d          #+#    #+#             */
/*   Updated: 2022/06/13 12:57:02 by amunoz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char *str)
{
	char			*cpy;
	unsigned int	j;

	j = 0;
	cpy = str;
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (*cpy)
	{
		ft_putchar(*cpy);
		cpy++;
		j++;
	}
	return (j);
}
