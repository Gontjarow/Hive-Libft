/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngontjar <ngontjar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 15:44:27 by ngontjar          #+#    #+#             */
/*   Updated: 2020/02/28 20:39:29 by ngontjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int num)
{
	char			string[11 + 1];
	unsigned int	number;
	unsigned int	length;

	if (num == 0)
		return (ft_strdup("0"));
	ft_memset(string, 0, 12);
	string[0] = (num < 0 ? '-' : '\0');
	length = ft_numlen(num);
	number = ABS(num);
	while (length--)
	{
		if (number)
			string[length] = '0' + (number % 10);
		number /= 10;
	}
	return (ft_strdup(string));
}
