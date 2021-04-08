/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngontjar <ngontjar@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 02:40:10 by ngontjar          #+#    #+#             */
/*   Updated: 2021/04/08 08:19:33 by ngontjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Writes hex values with a leading zero
** if the value would be less than 16 ("10")
*/

static int	numlen(size_t number, int base)
{
	int	len;

	len = 0;
	while (number)
	{
		++len;
		number /= base;
	}
	return (len);
}

static void	write_hex(size_t number)
{
	char	buffer[128];
	size_t	digits;
	size_t	index;
	size_t	mod;

	digits = number;
	index = (number == 0);
	index += numlen(number, 16);
	buffer[0] = '0';
	index -= (index > 1);
	digits = index;
	while (~index)
	{
		mod = number % 16;
		if (mod < 10)
			buffer[index--] = ('0' + mod);
		else
			buffer[index--] = ('a' + (mod - 10));
		number /= 16;
	}
	write(1, buffer, 1 + digits);
}

/*
** Alternate header:
**	ft_printf("%lu %.*s at %p:\n", size, 4 + (size > 1), "bytes", data);
*/

static void	show_char(unsigned char num)
{
	if (num >= 32 && num <= 126)
		write(1, &num, 1);
	else
		write(1, ".", 1);
}

static void	write_readable(unsigned char *data, size_t *show, size_t *byte)
{
	size_t	pad;

	pad = (16 - (*byte % 16)) % 16;
	pad = (pad * 2 + pad) + (pad / 4.0 + 0.25);
	write(1, "                                                  ", pad);
	write(1, "| ", 2);
	while ((*show) < (*byte))
		show_char(data[(*show)++]);
	write(1, "\n", 1);
}

void	ft_print_memory(const void *addr, size_t size)
{
	unsigned char	*data;
	size_t			byte;
	size_t			show;

	if (addr == NULL || size == 0)
	{
		write(1, "(null)\n", 7 * (addr == NULL));
		return ;
	}
	data = (unsigned char *)addr;
	byte = 0;
	show = 0;
	ft_printf("%lu %.*s at %p:\n", size, 4 + (size > 1), "bytes", data);
	while (byte < size)
	{
		write_hex(data[byte++]);
		write(1, "  ", 1 + ((byte % 4) == 0));
		if ((byte % 16) == 0)
			write_readable(data, &show, &byte);
		else if (byte == size)
			write_readable(data, &show, &byte);
	}
}
