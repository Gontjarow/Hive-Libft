#include <stdio.h>
#include "../libft.h"

int main()
{
	int i = 1;

	while (i < 200)
	{
		if (ft_issquare_int(i))
			printf("perfect square: %d\n", i);
		++i;
	}
}
