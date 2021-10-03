/* ******************************************************************************* */
/*                                                                                 */
/*                                                             :::      ::::::::   */
/*   ft_memcpy.c                                             :+:      :+:    :+:   */
/*                                                         +:+ +:+         +:+     */
/*   By: kpoquita <kpoquita@student.42abudhabi.ae>       +#+  +:+       +#+        */
/*                                                     +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 16:19:12 by kpoquita               #+#    #+#             */
/*   Updated: 2021/10/03 20:38:42 by kpoquita              ###   ########.fr       */
/*                                                                                 */
/* ******************************************************************************* */

//#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *d;
	unsigned char *s;
	size_t i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	if(dest == NULL && src == NULL)
		return (NULL);
	while(i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}

int main()
{
   char csrc[] = "HelloWorld!";
   char cdest[100];
   ft_memcpy(cdest, csrc, strlen(csrc)+1);
   printf("Copied string is %s", cdest);

   int isrc[] = {10, 20, 30, 40, 50};
   int n = sizeof(isrc)/sizeof(isrc[0]);
   int idest[n], i;
   ft_memcpy(idest, isrc,  sizeof(isrc));
   printf("\nCopied array is ");
   for (i=0; i<n; i++)
     printf("%d ", idest[i]);
   printf("\n");
   return 0;
}
