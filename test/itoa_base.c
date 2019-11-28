/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa_base.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngontjar <ngontjar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 14:26:38 by ngontjar          #+#    #+#             */
/*   Updated: 2019/11/28 14:55:28 by ngontjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "../libft.h"

int main()
{
	printf("15 > 2\t\t\t= %s\n", ft_itoa_base(15, 2));		// 1111
	printf("15 > 16\t\t\t= %s\n", ft_itoa_base(15, 16));	// F

	printf("777 > 2\t\t\t= %s\n", ft_itoa_base(777, 2));	// 1100001001
	printf("777 > 16\t\t= %s\n", ft_itoa_base(777, 16));	// 309

	// 1111111111111111111111111111111
	printf("%d > 2\t\t= %s\n", MAX_INT, ft_itoa_base(MAX_INT, 2));
	printf("%d > 2\t\t= %s\n", MIN_INT, ft_itoa_base(MIN_INT, 2));

	// 7FFFFFFF
	printf("%d > 16\t\t= %s\n", MAX_INT, ft_itoa_base(MAX_INT, 16));
	printf("%d > 16\t= %s\n", MIN_INT, ft_itoa_base(MIN_INT, 16));

	// ZIK0ZJ
	printf("%d > 36\t\t= %s\n", MAX_INT, ft_itoa_base(MAX_INT, 36));
	// ZIK0ZK
	printf("%d > 36\t= %s\n", MIN_INT, ft_itoa_base(MIN_INT, 36));

	printf("10 > 10\t\t\t= %s\n", ft_itoa_base(10, 10)); // 10
	printf("-10 > 10\t\t= %s\n", ft_itoa_base(-10, 10)); // -10

	// 2147483647
	printf("%d > 10\t\t= %s\n", MAX_INT, ft_itoa_base(MAX_INT, 10));

	// -2147483647
	printf("%d > 10\t= %s\n", MIN_INT, ft_itoa_base(MIN_INT, 10));
}
