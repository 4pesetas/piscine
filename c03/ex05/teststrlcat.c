#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i = 0;
	unsigned int lens = 0;
	unsigned int lend = 0;

	while(src[lens])
		lens++;
	while(dest[lend])
		lend++;
	if(size <= lend)
		lens += size;
	else
		lens += lend;
	while (src[i] && size > (lend + 1))
	{
		dest[lend] = src[i];
		i++;
		lend++;
	}
	dest[lend] = '\0';
	return (lens);
}
int main()
{
	char src[] = "abcd";
	char dest[] = "xxx";	
	unsigned int s = 5;
	printf("%d\n%s\n", ft_strlcat(src, dest, s), dest);

	char src1[] = "abcd";
	char dest1[] = "xxx";	
	unsigned int s1 = 5;
	printf("%zu\n%s\n", strlcat(src1, dest1, s1), dest1);
	return 0;
	
}