#include <unistd.h>

size_t ft_strlcpy(char *dest, const char *src, size_t n)
{
    char *cdest = dest;
    const char *csrc = src;
    size_t i;

    i = 0;
    while(src[i] && i < n)
    {
        *cdest++ = *csrc++;
        i++;
    }
    return (i);
}