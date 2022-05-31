/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-d <amunoz-d@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 10:40:15 by amunoz-d          #+#    #+#             */
/*   Updated: 2022/05/30 12:25:49 by amunoz-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	countword(char const *s, char c)
{
	int	i;
	int	len;
	int	sep;

	sep = 0;
	i = 0;
	len = ft_strlen(s);
	while (*s && *s == c)
		s++;
	while (*s)
	{
		if (*s == c)
		{
			sep++;
			while (*s && *s == c)
				s++;
			if (!*s)
				return (sep);
		}
		else
			s++;
	}
	return (sep + 1);
}

char	*word_cpy(const char *str, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return (NULL);
	while (start < end)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}	

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	i;
	size_t	j;
	int		index;

	if (!s)
		return (NULL);
	str = ft_calloc(countword(s, (int)c) + 1, sizeof(char *));
	if (!str)
		return (NULL);
	i = -1;
	j = 0;
	index = -1;
	while (++i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			str[j++] = word_cpy(s, index, i);
			index = -1;
		}
	}
	return (str);
}
