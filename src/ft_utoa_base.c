/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngontjar <ngontjar@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 05:27:01 by ngontjar          #+#    #+#             */
/*   Updated: 2020/08/23 05:53:14 by ngontjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_utoa_base(unsigned long long number, int base)
{
	char				string[64 + 1];
	unsigned long long	digits;
	unsigned int		index;
	unsigned int		mod;

	if (number == 0)
		return (ft_strdup("0"));
	if (base == 10)
		return (ft_utoa(number));
	base = ft_clamp(base, 2, 36);
	digits = number;
	index = 0;
	while (digits)
		(++index) && (digits /= base);
	string[index] = '\0';
	while (~--index)
	{
		mod = number % base;
		string[index] = (mod < 10) ? ('0' + mod) : ('A' + (mod - 10));
		number /= base;
	}
	return (ft_strdup(string));
}
