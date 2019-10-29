/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngontjar <ngontjar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 14:01:57 by ngontjar          #+#    #+#             */
/*   Updated: 2019/10/29 20:43:03 by ngontjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *str)
{
	size_t i;

	if (dst && str)
	{
		i = 0;
		while (str[i])
		{
			dst[i] = str[i];
			++i;
		}
		dst[i] = '\0';
	}
	return (dst);
}
