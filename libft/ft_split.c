/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpoquita <kpoquita@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 10:41:56 by kpoquita          #+#    #+#             */
/*   Updated: 2021/10/29 08:54:02 by kpoquita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	ft_word_count(char const *s, char c)
{
	int		i;
	int		words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			words++;
		i++;
	}
	return (words);
}

static char	*ft_stringcpy(char const *s, char c)
{
	char	*str;
	int		i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	ft_memcpy(str, s, i);
	str[i] = '\0';
	return (str);
}

static char	**ft_freemem(char **s)
{
	int	i;

	i = 0;
	while (i > 0)
		free(s[i--]);
	free(s);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	wordcount;
	char	**split;
	int		i;

	if (!s)
		return (NULL);
	wordcount = ft_word_count(s, c);
	split = (char **) malloc(sizeof(char *) * (wordcount + 1));
	if (!split)
		return (NULL);
	i = -1;
	while (++i < wordcount)
	{
		while (s[0] == c)
			s++;
		split[i] = ft_stringcpy(s, c);
		if (!(split[i]))
		{
			return (ft_freemem(split));
		}
		s += ft_strlen(split[i]);
	}
	split[i] = 0;
	return (split);
}
