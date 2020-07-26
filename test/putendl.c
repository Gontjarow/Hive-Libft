#include <stdio.h>
#include "../libft.h"

int main()
{
	size_t written;

	printf("The newline is included in the amount.\n");
	written = ft_putendl("");
	printf("1 == %lu\n", written);
	printf("\n");

	printf("strlen + 1\n");
	written = ft_putendl("Hello world!");
	printf("13 == %lu\n", written);
	printf("\n");

	printf("NULL becomes \"(null)\" and returns 6 + 1\n");
	written = ft_putendl(NULL);
	printf("7 == %lu\n", written);
}
