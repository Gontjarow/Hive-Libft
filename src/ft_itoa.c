/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngontjar <ngontjar@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 15:44:27 by ngontjar          #+#    #+#             */
/*   Updated: 2021/04/08 08:04:11 by ngontjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(long long number)
{
	char				string[20 + 1];
	unsigned long long	num;
	unsigned int		length;

	if (number == 0)
		return (ft_strdup("0"));
	ft_memset(string, 0, 21);
	string[0] = '-';
	length = ft_numlen(number);
	if (number < 0)
		num = -number;
	while (length--)
	{
		if (num)
			string[length] = '0' + (num % 10);
		num /= 10;
	}
	return (ft_strdup(string));
}
