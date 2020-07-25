/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnotice.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngontjar <ngontjar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 02:47:29 by ngontjar          #+#    #+#             */
/*   Updated: 2020/07/19 02:47:30 by ngontjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Allows special formatting for debug messages (for example).
** Foreground/Background styling are both optional,
** and the order is not explicit.
*/

void	ft_putnotice(const char *str, const char *fg, const char *bg)
{
	if (fg)
		ft_putstr(fg);
	if (bg)
		ft_putstr(bg);
	ft_putstr(str);
	write(1, "\n", 1);
	ft_putstr(TX_NORMAL);
}
