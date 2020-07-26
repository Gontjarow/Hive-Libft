#include <stdio.h>
#include "../libft.h"

int main()
{
	ft_putnotice("yellow on black", FG_YELLOW, BG_BLACK);
	ft_putendl("normal output");
	ft_putnotice("white on blue", FG_WHITE, BG_BLUE);
	ft_putnotice("normal output", NULL, NULL);
	ft_putnotice("red foreground", FG_RED, NULL);
	ft_putendl("normal output");
	ft_putnotice("red background", NULL, BG_RED);
	ft_putendl("normal output");
	ft_putnotice("underlined", TX_UNDER, NULL); // The order isn't explicit.
	ft_putendl("normal output");
	ft_putnotice("bold", NULL, TX_BOLD); // The order isn't explicit.
	ft_putendl("normal output");

	size_t written;

	printf("\nThe value returned is the length of the actual content.\n");
	printf("The color specifiers are not included.\n");
	printf("The newline is included in the amount.\n");
	written = ft_putnotice("", TX_BOLD, NULL);
	printf("1 == %lu\n", written);
	printf("\n");

	printf("strlen + 1\n");
	written = ft_putnotice("Hello world!", TX_BOLD, NULL);
	printf("13 == %lu\n", written);
	printf("\n");

	printf("NULL becomes \"(null)\" and returns 6 + 1\n");
	written = ft_putnotice(NULL, TX_BOLD, NULL);
	printf("7 == %lu\n", written);
}
