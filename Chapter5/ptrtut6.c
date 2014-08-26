#include<stdio.h>
#include<string.h>

main()
{
	char my_str[40] = "Ted";
	int l;

	puts(my_str);
	printf("\n");
	
	char *my_name = "Arun";
	puts(my_name);
	l = strlen(my_name);
	printf("%d\n", l);
}
