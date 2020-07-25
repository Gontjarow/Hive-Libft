#include <stdio.h>
#include "../libft.h"

int main()
{
	printf("1 == %u\n", ft_numlen_ull(0));
	printf("1 == %u\n", ft_numlen_ull(1));

	printf("9 == %u\n", ft_numlen_ull(582391240));

	printf("UL:  %lu == %d\n", MAX_ULONG, ft_numlen_ull(MAX_ULLONG));
	printf("ULL: %llu == %d\n", MAX_ULLONG, ft_numlen_ull(MAX_ULLONG));
}
