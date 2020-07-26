#include <stdio.h>
#include "../libft.h"

int main()
{
	size_t written;

	written = ft_putstr("");
	printf("0 == %lu\n", written);
	printf("\n");

	printf("strlen\n");
	written = ft_putstr("Hello world!");
	printf("\n12 == %lu\n", written);
	printf("\n");

	printf("NULL becomes \"(null)\" and returns 6\n");
	written = ft_putstr(NULL);
	printf("\n6 == %lu\n", written);
}
