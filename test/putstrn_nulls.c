#include "../libft.h"

int main()
{
	char string[] = "hello world\0how's the climate\0\0\0\0?";

	ft_putstrn_nulls(string, '_', 34);
}
