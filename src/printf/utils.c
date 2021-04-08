/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngontjar <ngontjar@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 09:08:51 by ngontjar          #+#    #+#             */
/*   Updated: 2021/04/08 09:09:21 by ngontjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	width_padder(int w, const char c, t_data *flag)
{
	while (w > 0)
	{
		write(1, &c, 1);
		++flag->written;
		--w;
	}
}
