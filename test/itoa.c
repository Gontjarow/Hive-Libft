/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngontjar <ngontjar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 14:26:38 by ngontjar          #+#    #+#             */
/*   Updated: 2020/03/02 18:04:29 by ngontjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "../libft.h"

int main()
{
	printf("0\n%s\n", ft_itoa(0));
	ft_putendl("");
	printf("1\n%s\n", ft_itoa(1));
	ft_putendl("");
	printf("-1\n%s\n", ft_itoa(-1));
	printf("-1 long\n%s\n", ft_itoa((long)-1));
	printf("-1 long long\n%s\n", ft_itoa((long long)-1));
	ft_putendl("");
	printf("-123\n%s\n", ft_itoa(-123));
	ft_putendl("");
	printf("2147483647\n%s\n", ft_itoa(INT_MAX));
	ft_putendl("");
	printf("-2147483648\n%s\n", ft_itoa(INT_MIN));
	ft_putendl("");
	ft_putendl("UINT_MAX");
	printf("%u\n%s\n", UINT_MAX, ft_itoa(UINT_MAX));
	ft_putendl("");
	ft_putendl("LONG_MAX");
	printf("%ld\n%s\n", LONG_MAX, ft_itoa(LONG_MAX));
	ft_putendl("");
	ft_putendl("LONG_MIN");
	printf("%ld\n%s\n", LONG_MIN, ft_itoa(LONG_MIN));
	ft_putendl("");
	ft_putendl("LLONG_MAX");
	printf("%lld\n%s\n", LLONG_MAX, ft_itoa(LLONG_MAX));
	ft_putendl("");
	ft_putendl("LLONG_MIN");
	printf("%lld\n%s\n", LLONG_MIN, ft_itoa(LLONG_MIN));
}
