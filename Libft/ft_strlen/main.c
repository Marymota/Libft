#include <stdio.h>
#include <string.h>

size_t ft_strlen(const char *str);

int main(int argc, char *argv[])
{
    (void)argc;
    printf("%li", ft_strlen(argv[1]));
}