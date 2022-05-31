/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-d <amunoz-d@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 09:34:36 by amunoz-d          #+#    #+#             */
/*   Updated: 2022/04/25 11:18:51 by amunoz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*str;
	char			ch;
	int				len;

	str = (char *)s;
	ch = (char) c;
	len = ft_strlen(s);
	while (len >= 0)
	{
		if (str[len] == ch)
		{
			return (str + len);
		}
		len--;
	}
	return (NULL);
}
