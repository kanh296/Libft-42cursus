/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nghoang <nghoang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 11:05:54 by nghoang           #+#    #+#             */
/*   Updated: 2022/11/11 11:19:32 by nghoang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tem;

	if (!*lst)
		return ;
	while (*lst)
	{
		tem = (*lst)->next;
		ft_lstdelone(*lst, del);
		tem = *lst;
	}
	*lst = 0;
}
