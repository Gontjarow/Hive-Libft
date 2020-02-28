/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngontjar <ngontjar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 14:26:38 by ngontjar          #+#    #+#             */
/*   Updated: 2020/02/28 20:41:13 by ngontjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "../libft.h"

int main()
{
	printf("0 = %s\n", ft_itoa(0));
	printf("1 = %s\n", ft_itoa(1));
	printf("-1 = %s\n", ft_itoa(-1));
	printf("2147483647 = %s\n", ft_itoa(INT_MAX));
	printf("-2147483648 = %s\n", ft_itoa(INT_MIN));
}
