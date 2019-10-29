/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngontjar <ngontjar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 15:44:27 by ngontjar          #+#    #+#             */
/*   Updated: 2019/10/25 18:12:38 by ngontjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int num)
{
	char			*string;
	unsigned int	number;
	int				chars;
	int				negative;

	negative = (num < 0);
	chars = ((num == 0) ? 1 : negative);
	number = (negative ? -num : num);
	while ((number > 0) && (number /= 10))
		++chars;
	if ((string = ft_strnew(chars + negative)) == NULL)
		return (NULL);
	string[0] = (negative ? '-' : '0');
	number = (negative ? -num : num);
	while (number)
	{
		string[chars--] = '0' + (number % 10);
		number /= 10;
	}
	return (string);
}
