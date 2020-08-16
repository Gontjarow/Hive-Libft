#include <stdio.h>
#include "../libft.h"

int	main(void)
{
	int i;

	printf("max\n");
	i = ft_clamp(10, 0, 9);
	printf("%d\n", i);

	i = ft_clamp(9, 0, 9);
	printf("%d\n", i);

	printf("min\n");
	i = ft_clamp(-1, 0, 9);
	printf("%d\n", i);

	i = ft_clamp(0, 0, 9);
	printf("%d\n", i);

	printf("in\n");

	for (int x = -2; x < 12; x++)
	{
		i = ft_clamp(x, 0, 9);
		printf("%d\n", i);
	}

	return 0;
}