/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nghoang <nghoang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 23:01:37 by nghoang           #+#    #+#             */
/*   Updated: 2022/11/08 14:57:53 by nghoang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*ret;

	if (!s1 || !s2)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	ret = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!ret)
		return (NULL);
	ft_memmove(ret, s1, len_s1);
	ft_memmove(ret + len_s1, s2, len_s2);
	ret[len_s1 + len_s2] = '\0';
	return (ret);
}
