#include <unistd.h>

void *ft_memset(void *ptr, int chr, size_t len)
{
    char *str = (char *)ptr;
    while(len--)
    {
        *str++ = chr;
    }
}