/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpoquita <kpoquita@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 11:41:14 by kpoquita          #+#    #+#             */
/*   Updated: 2021/10/21 10:14:26 by kpoquita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*cat;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	cat = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char) + 1);
	if (!cat)
		return (NULL);
	while (s1[i] != '\0')
	{
		cat[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		cat[i + j] = s2[j];
		j++;
	}
	cat[i + j] = '\0';
	return (cat);
}
