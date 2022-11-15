/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nghoang <nghoang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 14:36:37 by nghoang           #+#    #+#             */
/*   Updated: 2022/11/15 15:14:09 by nghoang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_size_neg(int n)
{
	size_t	size;

	size = 0;
	if (n == 0)
		size = 1;
	if (n < 0)
	{
		size += 1;
		n = -n;
	}
	while (n != 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*s;

	len = ft_size_neg(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	s = malloc((sizeof(char)) * (len + 1));
	if (!s)
		return (NULL);
	if (n == 0)
		s[0] = '0';
	if (n < 0)
	{
		s[0] = '-';
		n = -n;
	}
	s[len] = '\0';
	len--;
	while (n != 0)
	{
		s[len] = n % 10 + '0';
		len--;
		n = n / 10;
	}
	return (s);
}
