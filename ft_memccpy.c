/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngontjar <ngontjar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 16:43:06 by ngontjar          #+#    #+#             */
/*   Updated: 2019/10/25 14:17:40 by ngontjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *str, int c, size_t n)
{
	unsigned char		*destination;
	const unsigned char	*source;
	size_t				bytes;

	destination = dst;
	source = str;
	bytes = 0;
	while (bytes < n)
	{
		destination[bytes] = source[bytes];
		if (source[bytes] == (unsigned char)c)
		{
			return (destination + bytes + 1);
		}
		++bytes;
	}
	return (NULL);
}
