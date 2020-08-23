/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrn_case.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngontjar <ngontjar@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/23 05:19:58 by ngontjar          #+#    #+#             */
/*   Updated: 2020/08/23 05:20:38 by ngontjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t			putstrn_case(const char *str, size_t n, int mode)
{
	size_t	i;
	char	c;

	i = 0;
	if (str)
	{
		while (str[i] && i < n)
		{
			c = (mode < 0) ? ft_tolower(str[i]) : ft_toupper(str[i]);
			write(1, &c, 1);
			++i;
		}
	}
	else
		return (putstr_case("(null)", mode));
	return (i);
}
