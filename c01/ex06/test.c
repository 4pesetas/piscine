#include <stdio.h>

int	ft_strlen(char *str)
{
	if(*str == '\0')
		return 0;
	return 1 + ft_strlen(str + 1);
}
int main()
{
	char str[] = "abracadabra";
	
	printf("lenght = %d\n", ft_strlen(str));
	return 0;
}