/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngontjar <ngontjar@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 05:27:01 by ngontjar          #+#    #+#             */
/*   Updated: 2021/04/08 08:00:10 by ngontjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	numlen(unsigned long long number, int base)
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

char	*ft_utoa_base(unsigned long long number, int base)
{
	char				string[64 + 1];
	unsigned int		index;
	unsigned int		mod;

	if (number == 0)
		return (ft_strdup("0"));
	if (base == 10)
		return (ft_utoa(number));
	base = ft_clamp(base, 2, 36);
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
