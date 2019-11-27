/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngontjar <ngontjar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 20:18:02 by ngontjar          #+#    #+#             */
/*   Updated: 2019/11/27 20:19:39 by ngontjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_sqrt(unsigned int number)
{
	unsigned int root;
	unsigned int square;

	if (number == 0)
		return (0);
	root = 1;
	square = 1;
	while (square < number)
	{
		++root;
		square = root * root;
	}
	return (root - 1);
}
