#include <stdio.h>

void *ft_memset(void *ptr, int chr, size_t len);

int main()
{
    char str[50] = "The quick brown fox jumps over the lazy dog.";
    printf("\nBefore memset(): %s\n", str);

    ft_memset(str + 15, '!', 20*sizeof(char));

    printf("After memset(): %s", str);
    return 0;
}