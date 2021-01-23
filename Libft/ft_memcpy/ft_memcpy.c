#include <unistd.h>

void *ft_memcpy(void *dest, const void *src, size_t len)
{
    char *cdest = (char *)dest;
    char *csrc = (char *)src;
    
    while(len--)
    {
        *cdest++ = *csrc++;
    }
}