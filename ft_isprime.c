/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprime.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngontjar <ngontjar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 20:20:09 by ngontjar          #+#    #+#             */
/*   Updated: 2019/11/27 20:20:57 by ngontjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_isprime(unsigned int number)
{
	unsigned int divisor;

	divisor = 2;
	while (divisor <= number / 2)
	{
		if (number % divisor == 0)
			return (0);
		++divisor;
	}
	return (1);
}
