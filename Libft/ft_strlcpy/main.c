#include <stdio.h>
#include <string.h>

size_t ft_strlcpy(char *dest, const char *src, size_t n);

int main(void)
{
    char str1[] = "Cats control the universe";
    char str2[] = "Dogs";
    int res = ft_strlcpy(str1, str2, 4);
    printf("%i\n", res);
    printf("%s", str1);
}