#include "libft.h"

int main()
{
	char string[] = "hello _ world";

	size_t length = ft_strclen(string, '_');

	ft_putnbr(length);
}
