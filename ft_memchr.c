/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nghoang <nghoang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:01:09 by nghoang           #+#    #+#             */
/*   Updated: 2022/11/09 16:54:34 by nghoang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int ch, size_t count)
{
	size_t	i;
	char	*s;

	i = 0;
	s = (char *)ptr;
	while (i < count)
	{
		if (s[i] == (unsigned char)ch)
			return ((unsigned char *)(&ptr[i]));
		i++;
	}
	return (0);
}
