#include <stdio.h>
#include "../libft.h"

int main()
{
	unsigned int start = MAX_INT - 100;
	unsigned int range = 100;
	unsigned int i = 0;

	printf("MAX_INT boundary:\n");
	while (start + i < start + range)
	{
		if (ft_isprime(start + i))
			printf("prime: %d\n", start + i);
		++i;
	}

	start = 0;
	range = 100;
	i = 0;
	printf("Early primes:\n");
	while (start + i < start + range)
	{
		if (ft_isprime(start + i))
			printf("prime: %d\n", start + i);
		++i;
	}
}
