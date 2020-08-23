/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base_prefix.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngontjar <ngontjar@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 20:12:38 by ngontjar          #+#    #+#             */
/*   Updated: 2020/08/23 06:04:21 by ngontjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_base_prefix(const char *str)
{
	int		base;
	size_t	length;

	while (*str == '-' || *str == '+' || ft_isspace(*str))
		++str;
	length = ft_strlen(str);
	base = 10;
	if (length == 1)
		return (base);
	if (str[0] == '0')
	{
		if (str[1] == 'x' || str[1] == 'X')
			base = 16;
		else if (str[1] == 'b' || str[1] == 'B')
			base = 2;
		else if (ft_isdigit(str[1]))
			base = 8;
	}
	return (base);
}
