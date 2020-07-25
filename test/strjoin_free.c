#include <stdio.h>
#include "../libft.h"
#include <string.h>

int main()
{
	const char *orig_source = "Hello";

	char *source = ft_strdup(orig_source);
	printf(FG_CYAN "source: '%s' @ %p\n" TX_NORMAL, source, source);

	char *null = ft_strjoin_free(source, NULL);
	printf("null:   '%s' @ %p\n", null, null);
	// free(source); return; // This should NOT cause an error.

	source = ft_strjoin_free(source, " me");
	printf("source: '%s' @ %p\n", source, source);
	// free(source); return; // This should NOT cause an error.

	char *str2 = ft_strjoin_free(source, " and you");
	printf("str2:   '%s' @ %p\n", str2, str2);
	//free(source); return; // This should cause double-free!
}
