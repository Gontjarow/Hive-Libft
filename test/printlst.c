#include <stdio.h>
#include "../libft.h"

int main()
{
	t_list *head;
	t_list *second;
	char *str_2nd = "second";
	t_list *third;
	char *str_3rd = "aaaaaaa";

	head = ft_lstnew("first", 6);
	ft_lstadd_back(head, second = ft_lstnew(str_2nd, 7));
	ft_lstadd_back(head, third = ft_lstnew(str_3rd, 8));
	// printf("%p => %p => %p\n", head, second, third);
	// printf("%p, %p, %p\n", head->content, second->content, third->content);

	ft_putendl("Should print null");
	ft_printlst(NULL);
	ft_putendl("---");

	ft_putendl("Should contain 3 entries followed by null node");
	ft_printlst(head);
	ft_putendl("---");

	ft_putendl("Should contain one node with null content, followed by null node");
	ft_printlst(ft_lstnew(NULL, 10));
	ft_putendl("---");


	ft_putendl("Should print null");
	ft_printlst_endl(NULL);
	ft_putendl("---");

	ft_putendl("Should contain 3 entries followed by null node");
	ft_printlst_endl(head);
	ft_putendl("---");

	ft_putendl("Should contain one node with null content, followed by null node");
	ft_printlst_endl(ft_lstnew(NULL, 10));
	ft_putendl("---");
}
