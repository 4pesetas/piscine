#include <string.h>
#include <stdio.h>

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i = 0;
	unsigned int j = 0;

	while(src[j])
		j++;
	if(size == 0)
		return j;
	while(src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (j);
}
int main()
{
	char src[] = "xxx";
	char dest[8] = "";
	int size = 8;

	unsigned int res = ft_strlcpy(dest, src, size);
	printf("%d\n", res);
	
	char src1[] = "xxx";
	char dest1[8] = "";
	int size1 = 8;

	unsigned int res1 =  strlcpy(dest1, src1, size1);
	printf("%d\n", res);
	
	return 0;
}