/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngontjar <ngontjar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/17 18:25:21 by ngontjar          #+#    #+#             */
/*   Updated: 2019/10/25 16:08:27 by ngontjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	start;
	int	i;

	if (!*needle)
		return ((char *)haystack);
	start = 0;
	while (haystack[start])
	{
		i = 0;
		while (needle[i] && haystack[start + i] == needle[i])
		{
			++i;
		}
		if (needle[i] == '\0')
		{
			return ((char *)(haystack + start));
		}
		++start;
	}
	return (NULL);
}
