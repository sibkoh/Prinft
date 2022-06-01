/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-d <amunoz-d@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 09:59:18 by amunoz-d          #+#    #+#             */
/*   Updated: 2022/06/01 13:08:17 by amunoz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	main(int ac, char **av)
{
	ft_printf("%c\n", 'a');
	printf("%c\n", 'a');
	return(0);
}

int	ft_recognize_arg(char c, va_list arg)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	if (c == 's')
	{
		i = ft_print_str(va_arg(arg, char *));
	}
	if (c == 'c')
	{
		i = ft_print_chr(va_arg(arg, int));
	}
	return (i);
}

int	ft_printf(char const *format, ...)
{
	char const 		*traverse;
	unsigned	int	i;
	unsigned	int	j;
	va_list			arg;
	
	i = 0;
	j = 0;
	va_start(arg, format);
	traverse = format;
	while(*traverse)
	{
		if (*traverse != '%')
		{
			putchar(*traverse);
			traverse++;
			i++;
		}
		else
		{
			traverse++;
			j += ft_recognize_arg(*traverse, arg);
		traverse++;
	}
	}
	return (i + j);
}
