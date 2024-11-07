#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i = 0;
	int j;
	int k = 0;
	if (to_find[0] == 0)
		return str;
	while (str[i])
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			k = i;
			while(str[k] == to_find[j] && str[k])
			{
				k++;
				j++;
			}
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}