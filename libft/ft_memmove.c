/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpoquita <kpoquita@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 18:39:58 by kpoquita          #+#    #+#             */
/*   Updated: 2021/10/15 19:20:02 by kpoquita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *d;
	unsigned char *e_dst;
	unsigned char *s;
	unsigned char *e_src;
	
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	
	if(!dest && !src)
		return (NULL);
	if( s > d)
		ft_memcpy(d, s, n);
	else
	{
		e_dst = d + n - 1;
		e_src = s + n - 1;
		while(n-- > 0)
			*e_dst-- = *e_src--;
	}
	return (d);
  }
