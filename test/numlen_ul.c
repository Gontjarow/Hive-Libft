#include <stdio.h>
#include "../libft.h"

int main()
{
	printf("1 == %u\n", ft_numlen_ull(0));
	printf("1 == %u\n", ft_numlen_ull(1));

	printf("9 == %u\n", ft_numlen_ull(582391240));

	printf("UL:  %lu == %d\n", MAX_ULONG, ft_numlen_ul(MAX_ULONG));
	printf("-1:  %lu == %d\n", MAX_ULONG, ft_numlen_ul(-1));
}
