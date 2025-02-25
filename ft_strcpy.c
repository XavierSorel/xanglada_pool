#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	if (src == NULL)
		return 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}

int	 main()
{
	char src[] = "Hello_world";
	char dest[100];

	ft_strcpy(dest, src);
	for (int i = 0; i < strlen(dest);i++)
	{
		printf("%c", dest[i]);
	}
	return 0;
}
