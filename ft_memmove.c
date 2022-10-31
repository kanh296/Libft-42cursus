/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nghoang <nghoang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:10:52 by nghoang           #+#    #+#             */
/*   Updated: 2022/10/31 12:48:41 by nghoang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d1;
	char	*s1;
	size_t	i;

	i = 0;
	d1 = (char *)dst;
	s1 = (char *)src;
	if ((dst == NULL) && (src == NULL))
		return (NULL);
	if (src < dst)
	{
		while (len > 0)
		{
			d1[len - 1] = s1[len - 1];
			len--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
