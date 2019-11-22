/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngontjar <ngontjar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 21:08:59 by ngontjar          #+#    #+#             */
/*   Updated: 2019/11/22 20:17:54 by ngontjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(const char *str, char c)
{
	size_t	count;
	int		reading;

	count = 0;
	reading = FALSE;
	while (*str)
	{
		if ((!reading && *str != c) && ++count)
			reading = TRUE;
		else if (reading && *str == c)
			reading = FALSE;
		++str;
	}
	return (count);
}

static void	split_to_array(char **data, const char *str, char c)
{
	int			reading;
	const char	*end;
	size_t		length;

	reading = FALSE;
	while (*str)
	{
		if (!reading && *str != c)
		{
			reading = TRUE;
			end = ft_strchr(str, c);
			length = (end ? (size_t)(end - str) : ft_strlen(str));
			*(data++) = ft_strsub(str, 0, length);
		}
		else if (reading && *str == c)
			reading = FALSE;
		++str;
	}
}

char		**ft_strsplit(const char *str, char c)
{
	char		**data;
	size_t		bytes;

	if (!str)
		return (NULL);
	bytes = (word_count(str, c) + 1) * sizeof(char *);
	if (!(data = (char **)malloc(bytes)))
		return (NULL);
	ft_memset((void *)data, '\0', bytes);
	if (bytes == sizeof(char *))
		return (data);
	split_to_array(data, str, c);
	return (data);
}
