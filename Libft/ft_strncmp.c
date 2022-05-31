/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-d <amunoz-d@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 10:09:44 by amunoz-d          #+#    #+#             */
/*   Updated: 2022/04/25 10:37:25 by amunoz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *lhs, const char *rhs, size_t count)
{
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)lhs;
	s2 = (unsigned char *)rhs;
	while ((*s1 || *s2) && (count > 0))
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
		count--;
	}
	return (0);
}
