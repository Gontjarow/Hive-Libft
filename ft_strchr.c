/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngontjar <ngontjar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 17:04:42 by ngontjar          #+#    #+#             */
/*   Updated: 2019/10/22 22:59:55 by ngontjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	length;
	size_t	i;

	length = ft_strlen(str) + 1;
	i = 0;
	while (i < length)
	{
		if (str[i] == (char)c)
		{
			return (char *)(str + i);
		}
		++i;
	}
	return (NULL);
}
