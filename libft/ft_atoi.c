/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpoquita <kpoquita@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/17 18:52:17 by kpoquita          #+#    #+#             */
/*   Updated: 2021/10/20 23:46:58 by kpoquita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	char	*ptr;
	int		i;
	int		num;
	int		sign;

	ptr = (char *)str;
	i = 0;
	num = 0;
	sign = 1;
	while (ptr[i] > 0 && ptr[i] <= 32)
	{
		if (ptr[i] == 27)
			return (0);
		i++;
	}
	if (ptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (ptr[i] == '+')
		i++;
	while (ptr[i] != '\0' && ptr[i] >= 48 && ptr[i] <= 57)
	{
		num = num * 10 + ptr[i] - '0';
		i++;
	}
	return (num * sign);
}
