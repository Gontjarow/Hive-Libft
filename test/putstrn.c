#include <stdio.h>
#include "../libft.h"

int main()
{
	size_t written;

	printf("Undefined output when n > strlen, returns n\n");
	written = ft_putstrn("", 8);
	printf("\n8 == %lu\n", written);
	printf("\n");

	printf("n <= strlen, returns n\n");
	written = ft_putstrn("Hello world!", 8);
	printf("\n8 == %lu\n", written);
	printf("\n");

	printf("Outputs whole string when n == (size_t)-1\n");
	written = ft_putstrn("This is a phrase.", -1);
	printf("\n17 == %lu\n", written);
	printf("\n");

	printf("NULL becomes \"(null)\" and returns 6\n");
	written = ft_putstrn(NULL, 8);
	printf("\n6 == %lu\n", written);
	printf("\n");

	written = ft_putstrn(NULL, -1);
	printf("\n6 == %lu\n", written);
}
