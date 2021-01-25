#include <unistd.h>

int ft_memcmp(const void *str1, const void *str2, size_t n)
{
    const char *cstr1 = (char *)str1;
    const char *cstr2 = (char *)str2;

    while(n-- && (*cstr1++ != '\0' && *cstr2++ != '\0'))
    {
        if (*cstr1 > *cstr2)
        {
            return (1);
        }
        else if (*cstr1 < *cstr2)
        {
            return (-1);
        }
    }
    return (0);
}

