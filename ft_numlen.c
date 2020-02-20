/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngontjar <ngontjar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 02:08:13 by ngontjar          #+#    #+#             */
/*   Updated: 2020/02/20 03:18:20 by ngontjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Intended for 32bit input ranges [MIN_INT, MAX_UINT]
** -2147483648, 2147483647, 4294967295
*/

int		ft_numlen(long number)
{
	char length;

	if (number == 0)
		return (1);
	length = (number < 0);
	number = ABS(number);
	while (number)
	{
		++length;
		number /= 10;
	}
	return (length);
}