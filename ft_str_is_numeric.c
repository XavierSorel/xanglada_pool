#include <stdio.h>

int ft_str_is_numeric(char *str)
{
	int	is_num;
	int i;
	
	i = 0;
	is_num = 1;
	if (str == NULL)
		return is_num;
	while (str[i] != '\0')
	{
		if (str[i] > '9' ||  str[i] < '0')
			return 0;
		i++;
	}
	return is_num;
}

int main() {
    char *test1 = "1245";
    char *test2 = "Heo123";
    char *test3 = "";
    char *test4 = "O1nlyLetters";

    printf("Test 1 (1245): %d\n", ft_str_is_numeric(test1)); // Debe ser 1
    printf("Test 2 (Heo123): %d\n", ft_str_is_numeric(test2)); // Debe ser 0
    printf("Test 3 (Empty): %d\n", ft_str_is_numeric(test3));   // Debe ser 1
    printf("Test 4 (O1nlyLetters): %d\n", ft_str_is_numeric(test4)); // Debe ser 1

    return 0;
}
