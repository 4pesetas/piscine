#include <stdio.h>

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return i;
}

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i = 0;

	if(size == 0)
		return (ft_strlen(src));
	while(src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return(ft_strlen(src));
}
int main()
{
    char dest[] = "1";
	char src[] = "abcdef";
    unsigned int size = 4; 

    unsigned int result = ft_strlcpy(dest, src, size);

    printf("Source: %s\n", src);
    printf("Destination after ft_strlcpy with size %d: %s\n", size, dest);
    printf("Length of source: %d\n", result);

    return 0;
}