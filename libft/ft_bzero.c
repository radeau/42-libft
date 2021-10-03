/* ******************************************************************************* */
/*                                                                                 */
/*                                                             :::      ::::::::   */
/*   ft_bzero.c                                              :+:      :+:    :+:   */
/*                                                         +:+ +:+         +:+     */
/*   By: kpoquita <kpoquita@student.42abudhabi.ae>       +#+  +:+       +#+        */
/*                                                     +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 12:47:44 by kpoquita               #+#    #+#             */
/*   Updated: 2021/10/03 13:25:53 by kpoquita              ###   ########.fr       */
/*                                                                                 */
/* ******************************************************************************* */

#include "libft.h"
//#include <stdio.h>
//#include <strings.h> 
//#include <stdlib.h> 

void	ft_bzero(void *s, size_t n) {
	
	char *str;
	
	str = s;
	while(n-- > 0)
		*str++ = '\0';
}

/** TESTING
int main()
{
	char a[20];
	ft_bzero(a, 20);
	return 0;

}
**/
