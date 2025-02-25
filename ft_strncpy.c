#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	if (src == NULL)
		return 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	dest[i] = '\0';
	return dest;
}

int	 main()
{
	char src[] = "Hello_world";
	char dest[4];

	ft_strcpy(dest, src, 3);
	for (int i = 0; i < strlen(dest);i++)
	{
		printf("%c", dest[i]);
	}
	return 0;
}
