/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-d <amunoz-d@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 09:59:18 by amunoz-d          #+#    #+#             */
/*   Updated: 2022/06/03 12:20:45 by amunoz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	main(int ac, char **av)
{
	char	*s;

	s = "hola Mundo";
	ft_printf("%p\n", s);
	printf("%p\n", s);
	return (0);
}

int	ft_recognize_arg(char c, va_list arg)
{
	unsigned int	i;

	i = 0;
	if (c == 'c')
		i = ft_print_chr(va_arg(arg, int));
	if (c == 's')
		i = ft_print_str(va_arg(arg, char *));
	if (c == 'd' || c == 'i')
		i = ft_print_int(va_arg(arg, int));
	if (c == 'u')
		i = ft_print_putnbr(va_arg(arg, unsigned int));
	if (c == 'x')
		i = ft_print_hex(va_arg(arg, unsigned int));
	if (c == 'X')
		i = ft_print_hex2(va_arg(arg, unsigned int));
	if (c == 'p')
		i = ft_print_ptr(va_arg(arg, unsigned long long));
	printf("%d", i);
	return (i);
}

int	ft_printf(char const *format, ...)
{
	char const		*traverse;
	unsigned int	i;
	unsigned int	j;
	va_list			arg;

	i = 0;
	j = 0;
	va_start(arg, format);
	traverse = format;
	while (*traverse)
	{
		if (*traverse != '%')
		{
			putchar(*traverse);
			i++;
		}
		else
		{
			traverse++;
			j += ft_recognize_arg(*traverse, arg);
		}
		traverse++;
	}
	va_end(arg);
	return (i + j);
}
