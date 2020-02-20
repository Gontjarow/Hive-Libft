/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngontjar <ngontjar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 20:13:10 by ngontjar          #+#    #+#             */
/*   Updated: 2020/02/20 20:13:15 by ngontjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long			atoi_base(const char *str, int base)
{
	long		number;

	if ((str == 0 || *str == '\0') || (base != 0 && (base < 2 || base > 36)))
		return (0);
	while (ft_isspace(*str))
		++str;
	if (base == 0)
		base = check_base_prefix(*str);
	if (base == 10)
		return (ft_atoi(str));
	while (*str == '-' || *str == '+')
		++str;
	number = 0;
	while (ft_isdigit(*str) && (*str - '0') < base)
	{
		number *= 10;
		number += *str - '0';
		++str;
	}
	return (number);
}
