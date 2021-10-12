
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char *src;
	char *dest;
	int i;
	
	i = 0;
	src = (char *)s;

	if (!(dest = (char *)malloc(ft_strlen(src)*sizeof(char) + 1)))
				return NULL;
	while (*src)
		dest[i++] = *src++;
	dest[i] = '\0';
	
	return (dest);
}
