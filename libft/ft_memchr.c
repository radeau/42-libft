/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpoquita <kpoquita@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 10:57:50 by kpoquita          #+#    #+#             */
/*   Updated: 2021/10/18 11:39:11 by kpoquita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
        unsigned char    *str;
	size_t	i;

	i = 0;
        str = (unsigned char *)s;
        while (i < n)
        {
                if (str[i] == (unsigned char) c)
                        return (str + i);
                i++;
        }
        return (NULL);
}
