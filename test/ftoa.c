#include <stdio.h>
#include "../libft.h"

int main()
{
	printf("'0' == '%s'\n", ft_ftoa(0, 0));
	printf("'0' == '%s'\n", ft_ftoa(0.0f, 0));
	printf("'0' == '%s'\n", ft_ftoa(0.0, 0));
	printf("\n");
	printf("'0.0' == '%s'\n", ft_ftoa(0, 1));
	printf("'0.0' == '%s'\n", ft_ftoa(0.0f, 1));
	printf("'0.0' == '%s'\n", ft_ftoa(0.0, 1));
	printf("\n");
	printf("'0.0000000000000000000' ==\n'%s'\n\n", ft_ftoa(0, 21));
	printf("'0.0000000000000000000' ==\n'%s'\n\n", ft_ftoa(0.0f, 21));
	printf("'0.0000000000000000000' ==\n'%s'\n\n", ft_ftoa(0.0, 21));
	printf("\n");

	printf("Why would 0.5 round to 0 instead of 1?\n");
	printf("0.5 -> %%.0f ->\n'%.0f' ==\n'%s'\n\n", 0.5, ft_ftoa(0.5, 0));
	printf("0.5001 -> %%.0f ->\n'%.0f' ==\n'%s'\n\n", 0.5001, ft_ftoa(0.5001, 0));
	printf("123.987 -> %%.6f ->\n'%.6f' ==\n'%s'\n\n", 123.987, ft_ftoa(123.987, 6));
	printf("-1.0 -> %%.6f ->\n'%.6f' ==\n'%s'\n\n", -1.0, ft_ftoa(-1.0, 6));

	printf("Accurate up to 16 digits (on Ubuntu):\n");
	printf("1.02 -> %%.19f ->\n'%.19f' ==\n'%s'\n", 1.02, ft_ftoa(1.02, 19));
	printf("  |1--------0-----6---0|\n\n");
	printf("(1/3.0) -> %%.19Lf ->\n'%.19f' ==\n'%s'\n", (1/3.0), ft_ftoa((1/3.0), 19));
	printf("  |1--------0-----6---0|\n\n");
	printf("PI -> %%.19Lf ->\n'%.19f' ==\n'%s'\n", PI, ft_ftoa(PI, 19));
	printf("  |1--------0-----6---0|\n\n");

	printf("Identical:\n");
	printf("123456789012345.0 -> %%.19Lf ->\n'%.19f' ==\n'%s'\n\n", 123456789012345.0, ft_ftoa(123456789012345.0, 19));
	printf("123456789012345.1 -> %%.19Lf ->\n'%.19f' ==\n'%s'\n\n", 123456789012345.1, ft_ftoa(123456789012345.1, 19));
	printf("123456789012345.123456789012345 -> %%.19Lf ->\n'%.19f' ==\n'%s'\n\n", 123456789012345.123456789012345, ft_ftoa(123456789012345.123456789012345, 19));
	printf("-123456789012345.123456789012345 -> %%.19Lf ->\n'%.19f' ==\n'%s'\n\n", -123456789012345.123456789012345, ft_ftoa(-123456789012345.123456789012345, 19));
	printf("\n");

	printf("long double size: %ld\n", sizeof(long double));
}
