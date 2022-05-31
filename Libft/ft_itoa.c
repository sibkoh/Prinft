/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-d <amunoz-d@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 09:30:52 by amunoz-d          #+#    #+#             */
/*   Updated: 2022/05/12 13:24:02 by amunoz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countdig(long n)
{
	int		i;

	if (n == 0)
		return (1);
	i = 0;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

long	ft_conditions(long n, char *str)
{
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
		return (n);
	}
	if (n == 0)
		str[0] = '0';
	return (n);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	num;

	num = (long)n;
	len = ft_countdig(num) + 1;
	if (n < 0)
		len++;
	str = (char *)malloc(sizeof(char) * (len));
	if (!str)
		return (NULL);
	str[--len] = '\0';
	num = ft_conditions(n, str);
	while (num > 0)
	{
		str[--len] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}
