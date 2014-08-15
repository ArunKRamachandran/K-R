#include<stdio.h>

main(int argc,char *argv[])
{
	int a,b,sol;
	char op;

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	op = *argv[3];

	switch (op) {
		case '+':
			sol = a + b;
			printf("%d", sol);
			break;
		case '-':
			sol = a - b;
			printf("%d", sol);
			break;
		default :
			break;
	}
}
