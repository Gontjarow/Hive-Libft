#include <stdio.h>
#include "../libft.h"

int main()
{
	printf("10 == %d\n", ft_base_prefix("0"));
	printf("10 == %d\n", ft_base_prefix("123"));
	printf("10 == %d\n", ft_base_prefix("+123"));
	printf("10 == %d\n", ft_base_prefix("-123"));
	printf("10 == %d\n", ft_base_prefix("--123"));
	printf("10 == %d\n", ft_base_prefix("+-123"));
	printf("10 == %d\n", ft_base_prefix("++123"));
	ft_putendl("");
	printf("2 == %d\n", ft_base_prefix("0b101"));
	printf("2 == %d\n", ft_base_prefix("0B111"));
	printf("2 == %d\n", ft_base_prefix("+0b101"));
	printf("2 == %d\n", ft_base_prefix("-0B111"));
	printf("2 == %d\n", ft_base_prefix("- -0b101"));
	printf("2 == %d\n", ft_base_prefix(" +-0B111"));
	printf("2 == %d\n", ft_base_prefix("++ 0B111"));
	ft_putendl("");
	printf("8 == %d\n", ft_base_prefix("045"));
	printf("8 == %d\n", ft_base_prefix("076"));
	printf("8 == %d\n", ft_base_prefix("06210"));
	printf("8 == %d\n", ft_base_prefix("+045"));
	printf("8 == %d\n", ft_base_prefix("-076"));
	printf("8 == %d\n", ft_base_prefix("--06210"));
	printf("8 == %d\n", ft_base_prefix(" + - 06210"));
	printf("8 == %d\n", ft_base_prefix("++06210"));
	ft_putendl("");
	printf("16 == %d\n", ft_base_prefix("0x23A"));
	printf("16 == %d\n", ft_base_prefix("0Xb4C"));
	printf("16 == %d\n", ft_base_prefix("0xFEA"));
	printf("16 == %d\n", ft_base_prefix("+0Xb4C"));
	printf("16 == %d\n", ft_base_prefix("-0xFEA"));
	printf("16 == %d\n", ft_base_prefix("--0Xb4C"));
	printf("16 == %d\n", ft_base_prefix("+ -0xFEA"));
	printf("16 == %d\n", ft_base_prefix("++ 0xFEA"));
}
