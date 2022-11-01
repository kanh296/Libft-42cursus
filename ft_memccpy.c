/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nghoang <nghoang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 10:30:41 by nghoang           #+#    #+#             */
/*   Updated: 2022/11/01 11:29:17 by nghoang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t count)
{
	unsigned char	*d1;
	unsigned char	*s1;
	size_t			i;

	i = 0;
	d1 = (unsigned char *)dst;
	s1 = (unsigned char *)src;
	while (i < count)
	{
		d1[i] = s1[i];
		if ((unsigned char)s1[i] == (unsigned char)c)
			return ((void *)(dst + i + 1));
		i++;
	}
	return (NULL);
}
