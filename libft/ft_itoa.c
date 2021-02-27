#include "libft.h"

char    *ft_itoa(int n)
{
    char *ret;
    int i;
    int j;
    int sign;
    
    if (n < 0)
    {
      n = n * -1;
      sign = 1;
    }
    else
    {
      sign = 0;
    }
    if (n > 0)
    {
      i = n;
      j = 0;
      while (i > 0)
      {
        i = i / 10;
        ++j;
      }
      ret = malloc(sizeof(char) * (j + 1 + sign));
      ret[j] = 0;
    }
    while (n >= 10)
    {
        ret[--j] = (n % 10) + '0'; 
        n = n / 10;
    }
    if (n < 10)
    {
        ret[--j] = n + '0';
    }
    if (sign > 0)
        ret[0] = '-';
    return (ret);
}