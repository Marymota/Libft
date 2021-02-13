/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmota <marmota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 18:02:31 by marmota           #+#    #+#             */
/*   Updated: 2021/02/13 19:32:47 by marmota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*c_little;
	char	*c_big;
	char	*flag;
	size_t	i;

	c_big = (char *)big;
	if (!*little)
		return (c_big);
	flag = (char *)big;
	i = 0;
	c_little = (char *)little;
	while (len-- && *c_little)
	{
		while (*c_little++ == *c_big)
		{
			if (i++ == 0)
				flag = c_big;
		}
		if (i && i == ft_strlen(little))
			return (flag);
		i = 0;
		c_little = (char *)little;
		c_big++;
	}
	return (0);
}
