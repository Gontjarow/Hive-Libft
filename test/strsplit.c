#include <stdio.h>
#include "../libft.h"

int main()
{
	// Leading/trailing spaces should not be included.
	// Empty space between separators should not be included.
	// The last tab should be included when it is not a separator.

	char *string = "   lets pretend that this is a really complicated string that needs to be parsed into multiple words.\t   ";
	// char *string = "";

	char **words = ft_strsplit(string, ' ');

	int i = 0;
	while (words[i])
	{
		ft_putendl(words[i++]);
	}
}
