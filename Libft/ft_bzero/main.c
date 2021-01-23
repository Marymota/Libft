#include <stdio.h>

void *ft_bzero(void *ptr, size_t len);

int main()
{
    char str[50] = "GeeksForGeeks is for programming geeks.";
    printf("\nBefore memset(): %s\n", str);

    ft_bzero(str + 13, 8*sizeof(char));

    printf("After memset(): %s", str);
    return 0;
}