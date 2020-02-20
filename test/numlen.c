#include <stdio.h>
#include "../libft.h"

int main()
{
	printf("1 == %d\n", ft_numlen(0));
	printf("1 == %d\n", ft_numlen(1));
	printf("2 == %d\n", ft_numlen(-1));
	printf("11 == %d\n", ft_numlen(MIN_INT));
	printf("10 == %d\n", ft_numlen(MAX_INT));
	printf("10 == %d\n", ft_numlen(MAX_UINT));
}
