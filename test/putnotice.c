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

}
