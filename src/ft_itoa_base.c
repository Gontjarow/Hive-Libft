/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngontjar <ngontjar@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 13:36:21 by ngontjar          #+#    #+#             */
/*   Updated: 2021/04/08 07:41:21 by ngontjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Handles everything except base-10
**	because of the negative sign.
*/

static int	numlen(long long number, int base)
{
	int	len;

	len = 0;
	while (number)
	{
		++len;
		number /= base;
	}
	return (len);
}

char	*ft_itoa_base(long long number, int base)
{
	char			string[64 + 1];
	unsigned int	index;
	unsigned int	mod;

	if (number == 0)
		return (ft_strdup("0"));
	if (base == 10)
		return (ft_itoa(number));
	base = ft_clamp(base, 2, 36);
	if (number < 0)
		number = -number;
	index = numlen(number, base);
	string[index] = '\0';
	while (~--index)
	{
		mod = number % base;
		if (mod < 10)
			string[index] = ('0' + mod);
		else
			string[index] = ('A' + (mod - 10));
		number /= base;
	}
	return (ft_strdup(string));
}
