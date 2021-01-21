#include <unistd.h>

void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    
    char *cdest = dest;
    const char *csrc = src;

    while(n-- > 0)
    {
        
        if ((*cdest++ = *csrc++) == c){
            return (cdest);
        }
    }
    return (NULL);
}
