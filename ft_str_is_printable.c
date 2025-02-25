#include <stdio.h>

int ft_str_is_printable(char *str)
{
	int	is_low;
	int i;
	
	i = 0;
	is_low = 1;
	if (str == NULL)
		return is_low;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			return 0;
		i++;
	}
	return is_low;
}

int main()
{
    char *test1 = "hello";
    char *test2 = "Hello";
    char *test3 = "hello123";
    char *test4 = NULL;

    printf("Test 1: %s\n", ft_str_is_printable(test1) ? "All lowercase" : "Not all lowercase");
    printf("Test 2: %s\n", ft_str_is_printable(test2) ? "All lowercase" : "Not all lowercase");
    printf("Test 3: %s\n", ft_str_is_printable(test3) ? "All lowercase" : "Not all lowercase");
    printf("Test 4: %s\n", ft_str_is_printable(test4) ? "All lowercase" : "Not all lowercase");

    return 0;
}
