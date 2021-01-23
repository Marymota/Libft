#include <stdio.h>

void *ft_memcpy(void *dest, const void *src, size_t n);

int main(void)
{
    char str1[20] = "Correct!";
    char str2[20] = "Wrong!";
    printf("before memcpy: %s\n", str2);
    ft_memcpy(str2, str1, sizeof(str1));
    printf("after memcpy: %s", str2);
}