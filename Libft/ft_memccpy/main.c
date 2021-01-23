#include <stdio.h>

int main (void)
{
    char str_1[20] = "Cats are lazy";
    char str_2[10] = "adorable";
    ft_memccpy(str_1 + 9, str_2, 'd', 10);
    printf("%s\n", str_1);
}