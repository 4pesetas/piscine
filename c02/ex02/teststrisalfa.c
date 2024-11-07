#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int i = 0;
	while (str[i])
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
			return 0;
		i++;
	}
	return 1;
}
int	main()
{
	char str[] = "abc 45SDF";
	printf("%d\n", ft_str_is_alpha(str));
	return 0;
}