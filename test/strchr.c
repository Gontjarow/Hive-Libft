#include <stdio.h>
#include "../libft.h"
#include <string.h>

main()
{
	char *chrA;
	char *chrB;

	chrA = ft_strchr("hello world!", '_');
	chrB = strchr("hello world!", '_');
	printf("%p == %p\n", chrA, chrB);

	chrA = ft_strchr("hello world!", '!');
	chrB = strchr("hello world!", '!');
	printf("%p == %p\n", chrA, chrB);

	chrA = ft_strchr("hello world!", '\0');
	chrB = strchr("hello world!", '\0');
	printf("%p == %p\n", chrA, chrB);

	chrA = ft_strchr("hello world!", 'h');
	chrB = strchr("hello world!", 'h');
	printf("%p == %p\n", chrA, chrB);

	chrA = ft_strchr("hello world!", 'l');
	chrB = strchr("hello world!", 'l');
	printf("%p == %p\n", chrA, chrB);
}
