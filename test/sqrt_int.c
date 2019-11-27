#include <stdio.h>
#include "../libft.h"

int main()
{
	int i = 1;
	while (i < 200)
	{
		int square = ft_sqrt_int(i);
		if (ft_issquare_int(i))
			printf("sqrt of %d = %d (perfect)\n", i, square);
		else
			printf("sqrt of %d = %d\n", i, square);
		++i;
	}
	// printf("\n");
}
