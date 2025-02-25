#include <stdio.h>

int ft_str_is_uppercase(char *str)
{
	int	is_upper;
	int i;
	
	i = 0;
	is_low = 1;
	if (str == NULL)
		return is_upper;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			return 0;
		i++;
	}
	return is_upper;
}

int main() {
    char *test1 = "hello";
    char *test2 = "worlD";
    char *test3 = "";
    char *test4 = "bone4";

    printf("Test 1 (hello): %d\n", ft_str_is_uppercase(test1)); 
    printf("Test 2 (worlD): %d\n", ft_str_is_uppercase(test2)); 
    printf("Test 3 (Empty): %d\n", ft_str_is_uppercase(test3));   
    printf("Test 4 (bone4): %d\n", ft_str_is_uppercase(test4)); 

    return 0;
}
