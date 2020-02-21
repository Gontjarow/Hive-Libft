#include <stdio.h>
#include "../libft.h"

int main()
{
	printf("         0 == %ld\n", ft_atoi_base("0", 16));
	printf("         0 == %ld\n", ft_atoi_base("0x0", 16));
	printf("         1 == %ld\n", ft_atoi_base("0x1", 16));
	printf("        17 == %ld\n", ft_atoi_base("0x11", 16));
	printf("      6907 == %ld\n", ft_atoi_base("0x1AFB", 16));
	printf("     51489 == %ld\n", ft_atoi_base("0xC921", 16));
	printf(" 305419896 == %ld\n", ft_atoi_base("0x12345678", 16));
	printf("2147483648 == %ld\n", ft_atoi_base("0x80000000", 16));
	printf("4294967295 == %ld\n", ft_atoi_base("0xFFFFFFFF", 16));
	ft_putendl("");
	printf("        0 == %ld\n", ft_atoi_base("0", 2));
	printf("        0 == %ld\n", ft_atoi_base("0b0", 2));
	printf("        0 == %ld\n", ft_atoi_base("0b000", 2));
	printf("        1 == %ld\n", ft_atoi_base("0b1", 2));
	printf("        3 == %ld\n", ft_atoi_base("0b11", 2));
	printf("        7 == %ld\n", ft_atoi_base("0b111", 2));
	printf("        4 == %ld\n", ft_atoi_base("0b100", 2));
	printf("undefined == %ld\n", ft_atoi_base("0b12345678", 2));
	printf("undefined == %ld\n", ft_atoi_base("0b80000000", 2));
	printf("undefined == %ld\n", ft_atoi_base("0bFFFFFFFF", 2));
	ft_putendl("");
	printf("         0 == %ld\n", ft_atoi_base("0", 32));
	printf("         1 == %ld\n", ft_atoi_base("1", 32));
	printf("        11 == %ld\n", ft_atoi_base("B", 32));
	printf("      6907 == %ld\n", ft_atoi_base("6NR", 32));
	printf("     51489 == %ld\n", ft_atoi_base("1I91", 32));
	printf(" 305419896 == %ld\n", ft_atoi_base(" 0x938LJO", 32));
	printf("2147483648 == %ld\n", ft_atoi_base("+0b2000000", 32));
	printf("4294967295 == %ld\n", ft_atoi_base("-03VVVVVV", 32));
}
