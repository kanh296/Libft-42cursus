/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nghoang <nghoang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:46:55 by nghoang           #+#    #+#             */
/*   Updated: 2022/10/27 15:58:32 by nghoang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	const char	*t1;
	const char	*t2;

	i = 0;
	t1 = (const char *)s1;
	t2 = (const char *)s2;
	while (i < n)
	{
		if (t1[i] != t2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
