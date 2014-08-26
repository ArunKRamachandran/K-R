#include<stdio.h>

main()
{
	int i = 0x12345678;
	char *p;
	p = (char*)&i;
	printf("%x\n", *p);
	
	
}
