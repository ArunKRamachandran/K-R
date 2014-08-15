#include<stdio.h>

main(int argc,char *argv[])
{
	int a,b,sol = 0;
	char op = '+';
	int i = 0, j = 1, val[10];
	
	if (argc > 0) {
		printf("%d", argc); 
		if (isdigit(argv[1])) {          /* check this if loop */
			val[0] = atoi(*argv[1]);
			printf("AAAAdddddfff\n");
			printf("%d", val[0]);
		}
		else
			printf("not in if loop");
	}
}
/* -------------------------------------------------------------*/
/*	while (--argc > 0) {
		if (isdigit(argv[j])) {
			val[i++] = atoi(argv[j++]);
		}
		else if (isspace(argv[j]))
			j++;
		else {
			op = *argv[j];
			switch (op) {
				case '+': 
					sol = val[--i] + val[--i];
					j++;
					break;
				case '-':
					sol = val[i] - val[--i];
					j++;
					break;
				case '*':
					sol = val[i] * val[--i];
					j++;
					break;
				default :
					break;
			}
		}
	}
	printf("%i", sol);
}
*/			
/*	a = atoi(argv[1]);
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
}*/
