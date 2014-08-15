#include<stdio.h>

int  j, k;
int *ptr;
char *ptr1;

int main(void)
{
	char c;
	j = 1;
	k = 2;
	ptr = &k;
	c = 'a';
	ptr1 = &c;

	printf("\n");
	printf("j has the value %d & is stored at %p\n", j,(void *)&j);
	printf("k has the value %d & is sotred at %p\n", k, (void *)&k);
	printf("ptr has the value %p & is stored at %p\n", ptr, (void *)&ptr);
	printf("the value of the integer pointed to by ptr is %d\n", *ptr);
	printf("c has the value %c & is stored at %p\n", c, (void *)&c);
	printf("ptr1 has the value of : %p\n", ptr1);
	return 0;
}
