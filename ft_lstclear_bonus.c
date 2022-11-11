/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nghoang <nghoang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 11:05:54 by nghoang           #+#    #+#             */
/*   Updated: 2022/11/11 15:13:42 by nghoang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tem;

	if (!lst || !*lst || !del)
		return ;
	while (*lst)
	{
		tem = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tem;
	}
	*lst = 0;
}
