/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmota <marmota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 15:52:37 by marmota           #+#    #+#             */
/*   Updated: 2021/03/02 21:12:16 by marmota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (lst)
	{
		while (*lst)
		{
			*lst = (*lst)->next;
			ft_lstdelone(*lst, del);
		}
		*lst = 0;
	}
}
