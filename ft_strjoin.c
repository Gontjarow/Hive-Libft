/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngontjar <ngontjar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 20:10:34 by ngontjar          #+#    #+#             */
/*   Updated: 2019/10/22 22:54:31 by ngontjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*string;
	int		length;

	length = ft_strlen(s1) + ft_strlen(s2);
	string = ft_strnew(length);
	if (string == NULL)
		return (NULL);
	string = ft_strcat(string, s1);
	string = ft_strcat(string, s2);
	return (string);
}
