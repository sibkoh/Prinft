/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-d <amunoz-d@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 09:14:30 by amunoz-d          #+#    #+#             */
/*   Updated: 2022/05/30 12:17:40 by amunoz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	i;
	unsigned int	size;
	unsigned int	slen;

	i = 0;
	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		size = 1;
	else if ((slen - start) > len)
		size = len + 1;
	else
		size = slen - start + 1;
	str = (char *)ft_calloc(sizeof(char), size);
	if (!str)
		return (NULL);
	while (i < len && start < slen && s[start + i])
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);
}
