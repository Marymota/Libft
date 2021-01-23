#include <unistd.h>

void *ft_bzero(void *ptr, size_t len)
{
    char *str = (char *)ptr;
    while(len--)
    {
        *str++ = '\0';
    }
}