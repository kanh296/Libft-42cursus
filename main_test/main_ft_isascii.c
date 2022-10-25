/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_isascii.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nghoang <nghoang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:09:53 by nghoang           #+#    #+#             */
/*   Updated: 2022/10/25 11:20:52 by nghoang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main()
{
	int a = 1232;

	if (ft_isascii(a) != 0)
		printf("a is an ascii character");
	else
		printf("a is not an ascii character");
}