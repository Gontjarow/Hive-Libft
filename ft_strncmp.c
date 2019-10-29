/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngontjar <ngontjar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 17:04:27 by ngontjar          #+#    #+#             */
/*   Updated: 2019/10/22 22:57:41 by ngontjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t bytes;

	bytes = 0;
	if (!n)
		return (0);
	while (bytes < n)
	{
		if (!s1[bytes] || !s2[bytes] || (s1[bytes] != s2[bytes]))
			return ((unsigned char)s1[bytes] - (unsigned char)s2[bytes]);
		++bytes;
	}
	return (0);
}
