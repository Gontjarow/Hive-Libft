/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngontjar <ngontjar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 16:18:20 by ngontjar          #+#    #+#             */
/*   Updated: 2019/10/23 17:32:07 by ngontjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	char	*pointer;
	size_t	bytes;

	pointer = b;
	bytes = 0;
	while (bytes < n)
	{
		pointer[bytes] = (unsigned char)c;
		++bytes;
	}
	return (b);
}
