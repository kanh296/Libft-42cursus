/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nghoang <nghoang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 16:04:24 by nghoang           #+#    #+#             */
/*   Updated: 2022/11/01 14:05:47 by nghoang          ###   ########.fr       */
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
	while ((str[i] == '\t') || (str[i] == '\v') || (str[i] == '\r')
		|| (str[i] == '\n') || (str[i] == '\f') || (str[i] == ' '))
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
	}
	/*if ((res * neg) < -2147483648)
		return (0);
	if ((res * neg) > 2147483647)
		return (-1);*/
	return ((int)(res * neg));
}
