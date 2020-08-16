#include <stdio.h>
#include "../libft.h"

int			main(void)
{
	// printf("0 == '00'\n");
	// write_hex(0);
	// printf("\n");

	// printf("1 == '01'\n");
	// write_hex(1);
	// printf("\n");

	// printf("23 == '17'\n");
	// write_hex(23);
	// printf("\n");

	// printf("123 == '7B'\n");
	// write_hex(123);
	// printf("\n");

	// printf("255 == 'FF'\n");
	// write_hex(255);
	// printf("\n");

	// printf("UINT32_MAX == 'FFFFFFFF' (8 chars)\n");
	// write_hex(__UINT32_MAX__);
	// printf("\n");

	// ---

	printf("string: \"Hell\" + \\0\n");
	char string_5[] = "Hell";
	ft_print_memory(string_5, sizeof string_5);

	printf("\n");

	printf("string: \"Hello world\" + \\0\n");
	char string_12[] = "Hello world";
	ft_print_memory(string_12, sizeof string_12);

	printf("\n");

	printf("string: \"Hello world    \" + \\0\n");
	char string_16[] = "Hello world    ";
	ft_print_memory(string_16, sizeof string_16);

	printf("\n");

	printf("int memory_10int[10] = {0x7FFFFFFF, 2, 3, 4, 5, 6, 7, 8, 9, 0x21594548};\n");
	int memory_10int[10] = {0x7FFFFFFF, 2, 3, 4, 5, 6, 7, 8, 9, 0x21594548};
	ft_print_memory(memory_10int, sizeof memory_10int);

	printf("\n");

	// ---

	printf("int *ptrarr[10] = {(int *)0x23};\n");
	int *ptrarr[10] = {(int *)0x23};
	ft_print_memory(ptrarr, sizeof(ptrarr));

	printf("\n");

	printf("zero length, should print nothing:\n");
	ft_print_memory(ptrarr, 0);

	printf("\n");

	printf("NULL address, should print a null-indicator:\n");
	ft_print_memory(0, sizeof(ptrarr));

	printf("\n");

	printf("NULL address and zero length, should print a null-indicator:\n");
	ft_print_memory(0, 0);

	printf("\n");

	printf("int tab[10] = {0, 23, 150, 255, 12, 16, 42, 103};\n");
	int tab[10] = {0, 23, 150, 255, 12, 16, 42, 103};
	ft_print_memory(tab, sizeof(tab));

	printf("\n");

	printf("int tab2[30] = {0};\n");
	int tab2[30] = {0};
	ft_print_memory(tab2, sizeof(tab2));

	printf("\n");

	printf("int tab3[1] = {255};\n");
	int tab3[1] = {255};
	ft_print_memory(tab3, sizeof(tab3));

	printf("\n");

	printf("char tab4[1] = {'a'};\n");
	char tab4[1] = {'a'};
	ft_print_memory(tab4, sizeof(tab4));

	printf("\n");

	// ! Can't pass because of -1 (max size_t)
	// printf("address of main:\n");
	// ft_print_memory(&main, -1);
}
