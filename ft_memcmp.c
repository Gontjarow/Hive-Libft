/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngontjar <ngontjar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 15:59:05 by ngontjar          #+#    #+#             */
/*   Updated: 2019/10/21 11:21:11 by ngontjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				bytes;

	p1 = s1;
	p2 = s2;
	bytes = 0;
	while (bytes < n)
	{
		if (p1[bytes] != p2[bytes])
			return (p1[bytes] - p2[bytes]);
		++bytes;
	}
	return (0);
}
