/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpoquita <kpoquita@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 22:10:00 by kpoquita          #+#    #+#             */
/*   Updated: 2021/09/28 22:10:02 by kpoquita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
//remove above and change <libft.h> once done with libft.h
size_t	ft_strlen(const char *str)
{
	size_t i;
	
	i =  0;
	while(str[i] != '\0')
		i++;
	return (i);

}
