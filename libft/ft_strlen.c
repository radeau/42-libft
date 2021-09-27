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
