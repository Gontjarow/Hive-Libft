/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngontjar <ngontjar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 16:22:20 by ngontjar          #+#    #+#             */
/*   Updated: 2019/10/25 16:51:59 by ngontjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *str, size_t n)
{
	char		*destination;
	const char	*source;
	size_t		bytes;

	destination = dst;
	source = str;
	if ((n > 0) && (destination || source))
	{
		bytes = 0;
		while (bytes < n)
		{
			destination[bytes] = source[bytes];
			++bytes;
		}
	}
	return (dst);
}
