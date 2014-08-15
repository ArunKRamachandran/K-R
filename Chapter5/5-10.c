/* reverse pointer calculator - command line argument version */
#include<stdio.h>

main(int argc,char *argv[])
{
	int a,b,sol = 0, op1, op2;
	char op;
	int i = 0, j = 1, val[10];
	
	while (--argc > 0) {
	/*	printf("%d", argc);              */
		if (isdigit(*argv[j])) {           
	/*		printf("in main if loop\n");*/
			val[i] = atoi(argv[j]);
	/*		printf("val[%d]\n", i); */
			j++;
			i++;
		}
		else {
	/*		printf("in else loop\n"); */
			op = *argv[j];
	/*		printf("%c", op); */
			switch (op) {
				case '+':
					sol = val[--i] + val[--i];
				/*	printf("%d\n", sol);*/
					val[i] = sol;
					i++;
					j++;
					break;
				case '-':
					op1 = val[--i];
					sol = val[--i] - op1;
					val[i] = sol;
				/*	printf("final : val[%d] = %d\n",i, val[i]);*/
					i++;
					j++;
					break;
				case '*':
					sol = val[--i] * val[--i];
					val[i] = sol;
					i++;
					j++;
					break;
				default :
					break;
		 	}
	
		}

	}
	printf("\t%d\n", val[--i]);
}
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
