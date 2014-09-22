#include<stdio.h>
#include<stdlib.h>

int main()
{
	char c[1000];
	FILE *fptr;
	fptr = fopen("dat.txt", "r");
	fscanf(fptr, "%[^\n]", c);
	fclose(fptr);
	return 0;
}
