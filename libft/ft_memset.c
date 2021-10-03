/* ******************************************************************************* */
/*                                                                                 */
/*                                                             :::      ::::::::   */
/*   ft_memset.c                                             :+:      :+:    :+:   */
/*                                                         +:+ +:+         +:+     */
/*   By: kpoquita <kpoquita@student.42abudhabi.ae>       +#+  +:+       +#+        */
/*                                                     +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 08:45:37 by kpoquita               #+#    #+#             */
/*   Updated: 2021/10/03 11:00:56 by kpoquita              ###   ########.fr       */
/*                                                                                 */
/* ******************************************************************************* */

#include "libft.h"
//#include <stdio.h>
//#include <stddef.h>
//#include <string.h>

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char *ptr = str;
	while (n-- > 0)
		*ptr++ = c;
	return str;
}

/** TESTING

int main()
{
	char str[] = "Hello World!";
	ft_memset(str, 35, 5);
	printf("%s ==> ft_memset()\n", str);
	memset(str, 36, 5);
	printf("%s ==> memset()\n", str);
	return 0;
}

**/
