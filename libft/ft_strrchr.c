/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmota <marmota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 16:15:30 by marmota           #+#    #+#             */
/*   Updated: 2021/02/20 12:49:37 by marmota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	*found;

	if (!*s)
		return (0);
	found = (char *)s;
	str = (char *)s;
	while (*str)
	{
		if (*str == (char )c)
			found = str;
		str++;
	}
	if (c == 0)
		return (str);
	if (ft_isascii(c))
		return (found);
	return (0);
}
