/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngontjar <ngontjar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 19:36:00 by ngontjar          #+#    #+#             */
/*   Updated: 2019/10/22 22:54:57 by ngontjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(const char *str, char (*func)(char))
{
	char	*string;
	int		i;

	string = ft_strnew(ft_strlen(str));
	if (string == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		string[i] = func(str[i]);
		++i;
	}
	return (string);
}
