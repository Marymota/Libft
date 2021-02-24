#include "libft.h"

static int	count_non_spaces(const char *str, char c)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (*str++ != c)
			++i;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	*start;
	char	**ret;
	int		i;

	if (!s || !c)
		return (0);
	ret = (char **)malloc(sizeof(char *) * ft_strlen(s));
	if (!ret)
		return (0);
	i = 0;
	while (*s)
	{
		if (*s && *s != c)
		{
			start = (char *)s;
			while (*s && *s != c)
				++s;
			ret[i] = (char *)malloc(sizeof(char *) * (s - start + 1));
			ft_strlcpy(ret[i++], start, (s - start + 1));
		}
		s++;
	}
	ret[i] = 0;
	return (ret);
}
