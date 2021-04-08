/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_case.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngontjar <ngontjar@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 05:19:27 by ngontjar          #+#    #+#             */
/*   Updated: 2021/04/08 08:09:15 by ngontjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putstr_case(const char *str, int mode)
{
	size_t	i;
	size_t	length;
	char	c;

	if (mode == 0)
		return (ft_putstr(str));
	if (str == NULL)
		return (ft_putstr_case("(null)", mode));
	length = ft_strlen(str);
	i = 0;
	while (str[i])
	{
		if (mode < 0)
			c = ft_tolower(str[i]);
		else
			c = ft_toupper(str[i]);
		write(1, &c, 1);
		++i;
	}
	return (length);
}
