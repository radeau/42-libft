/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpoquita <kpoquita@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:48:46 by kpoquita          #+#    #+#             */
/*   Updated: 2021/10/28 17:32:19 by kpoquita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	int		i;

	str = (char *) s;
	if (c == '\0')
		return (str + ft_strlen(str));
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char) c)
			return (str + i);
		i++;
	}
	return (NULL);
}
