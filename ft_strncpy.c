/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngontjar <ngontjar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 14:25:02 by ngontjar          #+#    #+#             */
/*   Updated: 2019/10/25 16:28:24 by ngontjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *str, size_t len)
{
	size_t i;

	i = 0;
	while (str[i] && i < len)
	{
		dst[i] = str[i];
		++i;
	}
	if (str[i] == '\0')
	{
		while (i < len)
		{
			dst[i] = '\0';
			++i;
		}
	}
	return (dst);
}
