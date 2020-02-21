#include <stdio.h>
#include "../libft.h"

int main()
{
	printf("          0 == %d\n", ft_atoi("0"));
	printf("          0 == %d\n", ft_atoi("-0"));
	printf("          1 == %d\n", ft_atoi("1"));
	printf("         -1 == %d\n", ft_atoi("-1"));
	printf("-2147483648 == %d\n", ft_atoi("-2147483648"));
	printf(" 2147483647 ==  %d\n", ft_atoi("+2147483647"));
	printf("        123 == %d\n", ft_atoi("  123"));
	printf("        123 == %d\n", ft_atoi(" +123"));
	printf("        123 == %d\n", ft_atoi("++123"));
	printf("       -123 == %d\n", ft_atoi(" -123"));
	printf("       -123 == %d\n", ft_atoi("--123"));
}
