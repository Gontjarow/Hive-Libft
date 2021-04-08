#include <stdio.h>
#include "../libft.h"

int main()
{
	int a = 1;
	int b = 2;
	int c = *(int *)ft_ternary(a < b, &a, &b);
	printf("a:%i, b:%i, c = %i\n", a, b, c);

	char *nul = NULL;
	char *mem1 = (char *)malloc(128);
	char *mem2 = (char *)malloc(8);
	char *ptr = *(char **)ft_ternary(nul, &mem1, &mem2);
	printf("mem1:%p, mem2:%p, ptr = %p\n", mem1, mem2, ptr);

	printf("size of int = %zu\n", sizeof(int));
}
