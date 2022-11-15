/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nghoang <nghoang@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:03:23 by nghoang           #+#    #+#             */
/*   Updated: 2022/11/01 00:02:12 by nghoang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t num)
{
	size_t	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i] && i < num - 1)
	{
		i++;
	}
	if (num == 0)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
