/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_case.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngontjar <ngontjar@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 05:19:27 by ngontjar          #+#    #+#             */
/*   Updated: 2020/08/23 06:16:18 by ngontjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			ft_putstr_case(const char *str, int mode)
{
	size_t	i;
	size_t	length;
	char	c;

	if (mode == 0)
		return (ft_putstr(str));
	else
	{
		if (str)
		{
			length = ft_strlen(str);
			i = 0;
			while (str[i])
			{
				c = (mode < 0) ? ft_tolower(str[i]) : ft_toupper(str[i]);
				write(1, &c, 1);
				++i;
			}
		}
		else
			return (ft_putstr_case("(null)", mode));
	}
	return (length);
}
