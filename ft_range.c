/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngontjar <ngontjar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 17:28:10 by ngontjar          #+#    #+#             */
/*   Updated: 2019/10/22 17:45:07 by ngontjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		*ft_range(int min, int max)
{
	int *array;
	int i;

	array = (int *)malloc((max - min) * sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}
	else if (min >= max)
	{
		return (NULL);
	}
	else
	{
		i = 0;
		while (min < max)
		{
			array[i] = min;
			++i;
			++min;
		}
	}
	return (array);
}
