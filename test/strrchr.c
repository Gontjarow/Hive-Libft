#include <stdio.h>
#include "../libft.h"
#include <string.h>

main()
{
	char *chrA;
	char *chrB;

	chrA = ft_strrchr("hello world!", '_');
	chrB = strrchr("hello world!", '_');
	printf("%p == %p\n", chrA, chrB);

	chrA = ft_strrchr("hello world!", '!');
	chrB = strrchr("hello world!", '!');
	printf("%p == %p\n", chrA, chrB);

	chrA = ft_strrchr("hello world!", '\0');
	chrB = strrchr("hello world!", '\0');
	printf("%p == %p\n", chrA, chrB);

	chrA = ft_strrchr("hello world!", 'h');
	chrB = strrchr("hello world!", 'h');
	printf("%p == %p\n", chrA, chrB);

	chrA = ft_strrchr("hello world!", 'l');
	chrB = strrchr("hello world!", 'l');
	printf("%p == %p\n", chrA, chrB);
}
