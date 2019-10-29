/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngontjar <ngontjar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 16:22:20 by ngontjar          #+#    #+#             */
/*   Updated: 2019/10/28 12:48:53 by ngontjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *str, size_t n)
{
	char		*destination;
	const char	*source;

	destination = dst;
	source = str;
	if ((n > 0) && (destination || source))
	{
		if (destination < source)
			ft_memcpy(dst, str, n);
		else
		{
			destination += (n - 1);
			source += (n - 1);
			while (n--)
				*(destination--) = *(source--);
		}
	}
	return (dst);
}
