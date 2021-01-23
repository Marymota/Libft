
#include <stdio.h>
#include <string.h>

int ft_memcmp(const void *str1, const void *str2, size_t n);


int main(void)
{
    char str1[] = "Rainning cats";
    char str2[] = "Rainning cats & Dogs";
    int ret = ft_memcmp(str1, str2, sizeof(str1));
    if (ret == 0)
    {
        printf("%s", "Same value");
    }
    else if (ret > 0)
    {
        printf("str1 is higher than str2");
    }
    else if (ret < 0)
    {
        printf("str1 is lower than str2");
    }
}