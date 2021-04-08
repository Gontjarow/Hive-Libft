/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ternary.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngontjar <ngontjar@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 03:47:06 by ngontjar          #+#    #+#             */
/*   Updated: 2021/04/08 04:29:17 by ngontjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This is very stupid, but it works.
** I'm avoiding the words "true" and "false"
** in case it might cause naming conflicts in the future.
*/

void	*ft_ternary(int expression, void *yes, void *no)
{
	if (expression)
	{
		return (yes);
	}
	else
	{
		return (no);
	}
}
