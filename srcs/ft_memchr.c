/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nghoang <nghoang@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:01:09 by nghoang           #+#    #+#             */
/*   Updated: 2022/11/10 16:49:37 by nghoang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int ch, size_t count)
{
	size_t			i;
	unsigned char	*s;

	i = 0;
	s = (unsigned char *)ptr;
	while (i < count)
	{
		if ((unsigned char)s[i] == (unsigned char)ch)
			return ((void *)(&ptr[i]));
		i++;
	}
	return (0);
}
