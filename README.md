# Libft
## Standard C library Functions
|Functions|Prototype| Description | Param. #1 | Param. #2 | Param. #3 | Return Value
:-----------:|:-----------:|:-----------: | :-----------: | :-----------: | :-----------: | :-----------:
|[ft_memset](libft/ft_memset.c)|void       *ft_memset(void *s, int c, size_t len)| Fill with "len" bytes of "c" the memory of "s"| The string on which to operate | Value c (converted to an unsigned char) | The number of bytes | A pointer to the memory area s
|[ft_bzero](libft/ft_bzero.c)|void       *ft_bzero(void *s,  size_t n)|Erases the data in the "n" bytes of the memory starting at the location pointed by "s" writing zeroes | The string on which to operate | The number of bytes | None | None

## Additional Functions
|Functions|Prototype| Description | Param. #1 | Param. #2 | Param. #3 | Return Value
:-----------:|:-----------:|:-----------: | :-----------: | :-----------: | :-----------: | :-----------:
|[ft_substr](libft/ft_substr.c)|char   *ft_substr(char const *s, unsigned int start, size_t len)|Allocates (with malloc) and returns a substring from the string given in argument. The substring begins at index 'start' and is of maximum size 'len'| The string from which create the substring | The start index of the substring in the string| The maximum length of the substring | The substring. NULL if the allocation fails

## Bonus Functions
|Functions|Prototype| Description | Param. #1 | Param. #2 | Param. #3 | Return Value
:-----------:|:-----------:|:-----------: | :-----------: | :-----------: | :-----------: | :-----------:
