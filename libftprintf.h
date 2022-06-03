/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-d <amunoz-d@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 10:50:59 by amunoz-d          #+#    #+#             */
/*   Updated: 2022/06/03 12:36:19 by amunoz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include "Libft/libft.h"
# include "libftprintf.h"
# include <stdarg.h>

int		ft_printf(char const *format, ...);

void	ft_putchar(char c);
int		ft_print_str(char *str);
int		ft_print_chr(int c);
int		ft_print_int(int num);
int		ft_print_putnbr(unsigned int n);
int		ft_print_hex(unsigned int num);
int		ft_print_hex2(unsigned int num);
int		ft_print_ptr(unsigned long long ptr);

#endif
