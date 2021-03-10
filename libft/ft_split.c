/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmota <marmota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 20:59:55 by marmota           #+#    #+#             */
/*   Updated: 2021/02/26 21:48:00 by marmota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (*str++ != c)
			++i;
		while (*str && *str != c)
			str++;
		while (*str && *str == c)
			str++;
	}
	return (i);
}

char		**ft_split(char const *s, char c)
{
	char	*start;
	char	**ret;
	int		i;

	if (!s)
		return (0);
	ret = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
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
			ret[i] = (char *)malloc(sizeof(char) * (s - start + 1));
			ft_strlcpy(ret[i++], start, (s - start + 1));
		}
		if (*s)
			++s;
	}
	ret[i] = NULL;
	return (ret);
}
