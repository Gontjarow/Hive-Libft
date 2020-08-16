/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngontjar <ngontjar@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 14:26:38 by ngontjar          #+#    #+#             */
/*   Updated: 2020/08/16 04:13:20 by ngontjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "../libft.h"

int main()
{
	printf("15 > 2\n1111\n%s\n", ft_itoa_base(15, 2));		// 1111
	ft_putendl("");

	printf("15 > 16\nF\n%s\n", ft_itoa_base(15, 16));	// F
	ft_putendl("");

	printf("777 > 2\n1100001001\n%s\n", ft_itoa_base(777, 2));	// 1100001001
	ft_putendl("");

	printf("777 > 16\n309\n%s\n", ft_itoa_base(777, 16));	// 309
	ft_putendl("");

	printf("MAX_INT macro\n");
	printf("%d > 2\n1111111111111111111111111111111\n%s\n", MAX_INT, ft_itoa_base(MAX_INT, 2));
	ft_putendl("");

	printf("MIN_INT macro\n");
	printf("%d > 2\n10000000000000000000000000000000\n%s\n", MIN_INT, ft_itoa_base(MIN_INT, 2));
	ft_putendl("");

	// 7FFFFFFF
	printf("MAX_INT macro\n");
	printf("%d > 16\n7FFFFFFF\n%s\n", MAX_INT, ft_itoa_base(MAX_INT, 16));
	ft_putendl("");
	printf("MIN_INT macro\n");
	printf("%d > 16\n80000000\n%s\n", MIN_INT, ft_itoa_base(MIN_INT, 16));
	ft_putendl("");

	// ZIK0ZJ
	printf("MAX_INT macro\n");
	printf("%d > 36\nZIK0ZJ\n%s\n", MAX_INT, ft_itoa_base(MAX_INT, 36));
	ft_putendl("");
	// ZIK0ZK
	printf("MIN_INT macro\n");
	printf("%d > 36\nZIK0ZK\n%s\n", MIN_INT, ft_itoa_base(MIN_INT, 36));
	ft_putendl("");

	printf("10 > 10\n10\n%s\n", ft_itoa_base(10, 10)); // 10
	ft_putendl("");

	printf("-10 > 10\n-10\n%s\n", ft_itoa_base(-10, 10)); // -10
	ft_putendl("");

	// 2147483647
	printf("MAX_INT macro\n");
	printf("%d > 10\n%s\n", MAX_INT, ft_itoa_base(MAX_INT, 10));
	ft_putendl("");

	// -2147483647
	printf("MIN_INT macro\n");
	printf("%d > 10\n%s\n", MIN_INT, ft_itoa_base(MIN_INT, 10));
	ft_putendl("");
}
