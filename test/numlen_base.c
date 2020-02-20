#include <stdio.h>
#include "../libft.h"

int main()
{
	printf("1 == %d\n", ft_numlen_base(0, 2));
	printf("1 == %d\n", ft_numlen_base(1, 2));
	printf("3 == %d\n", ft_numlen_base(7, 2));
	printf("10 == %d\n", ft_numlen_base(666, 2));
	printf("32 == %d\n", ft_numlen_base(-1, 2));
	printf("32 == %d\n", ft_numlen_base(MIN_INT, 2));
	printf("31 == %d\n", ft_numlen_base(MAX_INT, 2));
	printf("32 == %d\n", ft_numlen_base(MAX_UINT, 2));
	ft_putendl("");
	printf("1 == %d\n", ft_numlen_base(0, 8));
	printf("1 == %d\n", ft_numlen_base(1, 8));
	printf("1 == %d\n", ft_numlen_base(7, 8));
	printf("4 == %d\n", ft_numlen_base(666, 8));
	// printf("32 == %d\n", ft_numlen_base(-1, 2));
	printf("11 == %d\n", ft_numlen_base(MIN_INT, 8));
	printf("11 == %d\n", ft_numlen_base(MAX_INT, 8));
	printf("11 == %d\n", ft_numlen_base(MAX_UINT, 8));
	ft_putendl("");
	printf("1 == %d\n", ft_numlen_base(0, 16));
	printf("1 == %d\n", ft_numlen_base(1, 16));
	printf("2 == %d\n", ft_numlen_base(17, 16));
	printf("3 == %d\n", ft_numlen_base(666, 16));
	// printf("32 == %d\n", ft_numlen_base(-1, 2));
	printf("8 == %d\n", ft_numlen_base(MIN_INT, 16));
	printf("8 == %d\n", ft_numlen_base(MAX_INT, 16));
	printf("8 == %d\n", ft_numlen_base(MAX_UINT, 16));
	ft_putendl("");
	printf("1 == %d\n", ft_numlen_base(0, 32));
	printf("1 == %d\n", ft_numlen_base(1, 32));
	printf("1 == %d\n", ft_numlen_base(17, 32));
	printf("2 == %d\n", ft_numlen_base(666, 32));
	printf("7 == %d\n", ft_numlen_base(MIN_INT, 32));
	printf("7 == %d\n", ft_numlen_base(MAX_INT, 32));
	printf("7 == %d\n", ft_numlen_base(MAX_UINT, 32));
}
