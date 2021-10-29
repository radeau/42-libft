/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpoquita <kpoquita@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 18:39:58 by kpoquita          #+#    #+#             */
/*   Updated: 2021/10/29 10:00:54 by kpoquita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*e_dst;
	unsigned char	*s;
	unsigned char	*e_src;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	if (s > d)
		ft_memcpy(d, s, len);
	else
	{
		e_dst = d + len - 1;
		e_src = s + len - 1;
		while (len-- > 0)
			*e_dst-- = *e_src--;
	}
	return (d);
}
