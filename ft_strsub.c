/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngontjar <ngontjar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 19:58:20 by ngontjar          #+#    #+#             */
/*   Updated: 2019/10/25 14:33:01 by ngontjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *str, unsigned int start, size_t len)
{
	char	*string;
	int		i;

	string = ft_strnew(len);
	if (string == NULL)
		return (NULL);
	i = 0;
	while (i < (int)len)
	{
		string[i] = str[start + i];
		++i;
	}
	return (string);
}
