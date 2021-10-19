/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpoquita <kpoquita@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 22:39:29 by kpoquita          #+#    #+#             */
/*   Updated: 2021/10/19 12:33:19 by kpoquita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
/*
{
	char	*dest;
	char	*src;
	unsigned int	i;
	unsigned int	j;

	src = (char *)s;
	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	if (!(dest = (char *)malloc(sizeof(char)*(len + 1))))
		return (NULL);
	while (i != start && src[i] != '\0')
		i++;
	while (src[i] != '\0' && len-- > 0)
		dest[j++] = src[i++];
	dest[j] = '\0';
	return (dest);
}


{
	size_t	i;
	char	*sub;

	if (!s)
		return (NULL);
	if (len > ft_strlen(s))
		len = ft_strlen(s) - start;
	if (start >= ft_strlen(s))
		return ((ft_strdup("")));
	sub = (char *)malloc(sizeof(char)*(len+1));
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len && start <= ft_strlen(s))
		sub[i++] = s[start++];
	sub[i] = '\0';
	return (sub);
}*/


{
	size_t	i;
	size_t	j;
	char	*str;

	if (!s)
		return (NULL);
	str = (char*)malloc(sizeof(*s) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
	return (str);
}
