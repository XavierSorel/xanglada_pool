int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
		{
			return s1[i] - s2[i];
		}
		i++;
	}
	if (i < n)
		return s1[i] - s2[i];
	return 0;
}

#include <stdio.h>
int main()
{
    char *str1 = "hello";
    char *str2 = "hella";
    char *str3 = "hello";
    char *str4 = "hellooo";

    printf("Comparing str1 and str2: %d\n", ft_strncmp(str1, str2, 5)); // Should show non-zero (difference at 'o' vs 'a')
    printf("Comparing str1 and str3: %d\n", ft_strncmp(str1, str3, 5)); // Should show 0 (they’re the same)
    printf("Comparing str1 and str4: %d\n", ft_strncmp(str1, str4, 5)); // Should show 0 (first 5 chars are the same)
    printf("Comparing str1 and str4: %d\n", ft_strncmp(str1, str4, 10)); // Should show non-zero (difference after 5th char)

    return 0;
}
