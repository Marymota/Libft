/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marmota <marmota@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 21:13:46 by marmota           #+#    #+#             */
/*   Updated: 2021/03/02 21:13:47 by marmota          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;

	if (!lst || !f)
		return (0);
	tmp = ft_lstnew(f(lst->content));
	if (!tmp)
	{
		ft_lstclear(&lst, del);
		return (0);
	}
	return (tmp);
}
