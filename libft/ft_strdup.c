/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpoquita <kpoquita@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 09:49:47 by kpoquita          #+#    #+#             */
/*   Updated: 2021/10/21 10:01:59 by kpoquita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*src;
	char	*dest;
	int		i;

	i = 0;
	src = (char *)s1;
	dest = (char *) malloc(ft_strlen(src) * sizeof(char) + 1);
	if (!dest)
		return (NULL);
	while (*src)
		dest[i++] = *src++;
	dest[i] = '\0';
	return (dest);
}
