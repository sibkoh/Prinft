/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-d <amunoz-d@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 10:02:05 by amunoz-d          #+#    #+#             */
/*   Updated: 2022/06/02 10:37:15 by amunoz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_print_int(int num)
{
	char		*strnum;
	unsigned int	i;

	i = 0;
	strnum = ft_itoa(num);
	i = ft_print_str(strnum);
	return (i);
}
