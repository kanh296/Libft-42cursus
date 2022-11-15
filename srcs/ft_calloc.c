/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nghoang <nghoang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 14:06:36 by nghoang           #+#    #+#             */
/*   Updated: 2022/11/09 18:08:23 by nghoang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*res;

	if (num == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	res = malloc(size * num);
	if (res == NULL)
		return (NULL);
	ft_bzero(res, num * size);
	return (res);
}
