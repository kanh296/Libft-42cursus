/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nghoang <nghoang@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 01:50:30 by nghoang           #+#    #+#             */
/*   Updated: 2022/01/14 04:32:11 by nghoang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*s;

	s = (char *)malloc(sizeof(char) * 3);
	if (s == NULL)
		return (NULL);
	if (n == -2147483648)
	{
		return (ft_strdup("-2147483648"));
	}
	if (n < 0)
	{
		s[0] = '-';
		s[1] = '\0';
		s = ft_strjoin(s, ft_itoa(-n));
	}
	else if (n >= 10)
		s = ft_strjoin(ft_itoa(n / 10), ft_itoa(n % 10));
	else if (n < 10 && n >= 0)
	{
		s[0] = n + '0';
		s[1] = '\0';
	}
	return (s);
}
