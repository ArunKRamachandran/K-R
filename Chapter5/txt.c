#include<stdio.h>
#include<string.h>

main()
{
	int i, l;
	char c, ar[100];
	printf("Enetr some characters.. \n");
	for (i = 0; (c = getchar()) != '\n'; i++)
		ar[i] = c;
	l = i;
	printf("%d", l);

	for (i = 0; i < l; i++)
		printf("%c", ar[i]);

	
}
