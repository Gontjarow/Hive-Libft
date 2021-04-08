/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hcf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngontjar <ngontjar@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 13:13:12 by ngontjar          #+#    #+#             */
/*   Updated: 2021/04/08 03:54:16 by ngontjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_hcf(unsigned int a, unsigned int b)
{
	unsigned int	result;
	unsigned int	high;
	unsigned int	low;
	unsigned int	remainder;

	result = 0;
	if (a && b)
	{
		high = *(unsigned int *)ft_ternary(a > b, &a, &b);
		low = *(unsigned int *)ft_ternary(a < b, &a, &b);
		remainder = 1;
		while (remainder)
		{
			remainder = high % low;
			if (remainder == 0)
			{
				result = low;
				break ;
			}
			high = low;
			low = remainder;
		}
	}
	return (result);
}
