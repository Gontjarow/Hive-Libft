/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngontjar <ngontjar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 13:36:21 by ngontjar          #+#    #+#             */
/*   Updated: 2020/03/06 13:07:04 by ngontjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base(uintmax_t number, int base)
{
	char			string[32 + 1];
	unsigned int	num;
	unsigned int	mod;
	unsigned int	i;

	if (base < 2 || base > 36)
		return (NULL);
	if (base == 10)
		return (ft_itoa(number));
	i = 0;
	string[i] = '0';
	num = ABS(number);
	while (num)
	{
		mod = num % base;
		string[i++] = (mod > 9 ? 'A' + (mod - 10) : '0' + mod);
		num /= base;
	}
	string[i] = '\0';
	ft_strrev(string);
	return (ft_strdup(string));
}
