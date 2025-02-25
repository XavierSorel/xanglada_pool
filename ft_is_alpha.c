#include <stdio.h>

int ft_str_is_alpha(char *str)
{
	int	is_alfa;
	int i;
	
	i = 0;
	is_alfa = 1;
	if (str == NULL)
		return is_alfa;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			if(str[i] < 'A' || str[i] > 'Z')
				return 0;
		i++;
	}
	return is_alfa;
}

int main() {
    char *test1 = "HelloWorld";
    char *test2 = "Hello123";
    char *test3 = "";
    char *test4 = "OnlyLetters";

    printf("Test 1 (HelloWorld): %d\n", ft_str_is_alpha(test1)); // Debe ser 1
    printf("Test 2 (Hello123): %d\n", ft_str_is_alpha(test2)); // Debe ser 0
    printf("Test 3 (Empty): %d\n", ft_str_is_alpha(test3));   // Debe ser 1
    printf("Test 4 (OnlyLetters): %d\n", ft_str_is_alpha(test4)); // Debe ser 1

    return 0;
}
