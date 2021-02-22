/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmota <marmota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 00:07:16 by marmota           #+#    #+#             */
/*   Updated: 2021/02/22 17:50:49 by marmota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static int	count_ch(const char *str, char c)
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

static int	count_words(const char *str, char c)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (*str++ != c)
			++i;
		while (*str != c)
			str++;
		while (*str == c)
			str++;
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
	ret = (char **)malloc(sizeof(char *) * count_ch(s, c) * count_words(s, c));
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
