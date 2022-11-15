/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nghoang <nghoang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:04:24 by nghoang           #+#    #+#             */
/*   Updated: 2022/11/04 14:24:12 by nghoang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long			res;
	long			neg;
	unsigned int	i;

	res = 0;
	neg = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	if ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		res = res * 10 + str[i] - '0';
		i++;
		if ((res * neg) < -2147483648)
			return (0);
		if ((res * neg) > 2147483647)
			return (-1);
	}
	return ((int)(res * neg));
}
