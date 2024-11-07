#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int i = 0;
	int j = 0;
	int lens = 0;
	unsigned int lend = 0;
	
	while(src[lens])
		lens++;
	while(dest[lend])
		lend++;
	if(size <= lend)
		lens += size;
	else
		lens += lend;
	while(src[i] && size >= (lend + 1))
	{
		dest[lend] = src[i];
		i++;
		lend++;
	}
	dest[lend] = '\0';
	return(lens);
	
}