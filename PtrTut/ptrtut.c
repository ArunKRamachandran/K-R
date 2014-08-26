#include<stdio.h>

int j, k;
int *ptr;

int main(void)
{
	j = 1;
	k = 2;
	ptr = &j;
	printf("j has the value %d\n", j);
	printf("j is stored at %p\n", (char *)ptr);
	return 0;
}
