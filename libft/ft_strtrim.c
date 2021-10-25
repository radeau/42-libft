/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpoquita <kpoquita@42abudhabi.ae>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 10:41:35 by kpoquita          #+#    #+#             */
/*   Updated: 2021/10/25 13:00:59 by kpoquita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int    ft_isset(int s1, char const *set)
{
    int i;
    
    i = 0;
    while (set[i] != '\0')
    {
        if (set[i] == s1)
            return (1);
        i++;
    }
    return (0);
}

char    *ft_strtrim(char const *s1, char const *set)
{
      char  *trim;
      int   f;
      int   l;
      int   i;
      
      f = 0;
      l = ft_strlen(s1);
      if (!s1 || !set)
          return (NULL);
      while (s1[f] != '\0' && ft_isset(s1[f], (char *)set))
            f++;
      while (l > f && ft_isset(s1[l - 1], (char *)set))
            l--;
      trim = (char *)malloc(sizeof(char) * (l - f) + 1);
      if (!trim)
          return (NULL);
      i = 0;
      while (f < l)
          trim[i++] = s1[f++];
      trim[i] = '\0';
      return (trim);
}
