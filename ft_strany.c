/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strany.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngontjar <ngontjar@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/18 20:15:20 by ngontjar          #+#    #+#             */
/*   Updated: 2020/08/23 05:18:19 by ngontjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** returns a pointer to the first matching character specifier(s).
*/

char	*strany(const char *string, char *specifiers)
{
	size_t a;
	size_t b;

	a = 0;
	while (string[a])
	{
		b = 0;
		while (specifiers[b])
		{
			if (string[a] == specifiers[b])
				return (char *)(&string[a]);
			++b;
		}
		++a;
	}
	return (NULL);
}

/*
** returns a pointer to the first non-matching character specifier.
*/

char	*strany_skip(const char *string, char *specifiers)
{
	size_t	a;
	size_t	b;
	char	skip;

	a = 0;
	while (string[a])
	{
		b = 0;
		skip = FALSE;
		while (specifiers[b])
		{
			if (string[a] == specifiers[b])
			{
				skip = TRUE;
				break ;
			}
			++b;
		}
		if (skip == FALSE)
			return (char *)(&string[a]);
		++a;
	}
	return (NULL);
}

/*
** returns a pointer to the first matching character specifier.
*/

char	*strchr_skip(const char *string, char specifier)
{
	size_t i;

	i = 0;
	while (string[i])
	{
		if (string[i] != specifier)
			return (char *)(string + i);
		++i;
	}
	return (NULL);
}
