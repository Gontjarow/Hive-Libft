/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngontjar <ngontjar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 16:52:30 by ngontjar          #+#    #+#             */
/*   Updated: 2019/10/22 18:31:47 by ngontjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	const char	*source;
	size_t		bytes;

	source = str;
	bytes = 0;
	while (bytes < n)
	{
		if (source[bytes] == c)
		{
			return ((void *)(source + bytes));
		}
		++bytes;
	}
	return (NULL);
}
