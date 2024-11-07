#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i = 0;
	int j;
	int k;

	while(str[i])
	{
		j = 0;
		if(to_find[j] == str[i])
			{
				k = i;
				while(to_find[j] == str[k] && to_find[j])
				{
					j++;
					k++;
				}
				if(to_find[j] == '\0')
					return(&str[i]);
			}
		i++;
	}
	return 0;
}