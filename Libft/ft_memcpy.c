/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-d <amunoz-d@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 14:30:48 by amunoz-d          #+#    #+#             */
/*   Updated: 2022/04/26 11:33:51 by amunoz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	unsigned char			*s1;
	unsigned char			*s2;

	s1 = (unsigned char *)dest;
	s2 = (unsigned char *)src;
	if ((dest == NULL) && (src == NULL))
		return (NULL);
	while (count-- > 0)
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	return ((void *)dest);
}
