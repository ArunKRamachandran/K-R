#include<stdio.h>

#define HIGH 1
#define LOw 0

main()
{
	int c, len, i = 0, k = 0, brkt_p = 0, brcs_p = 0, sq_p = 0, dq_p = 0;
	int brkt = 0, brcs = 0, sq = 0, dq = 0;
	char arr[100];

	printf("\nEnter a  c code\n");
	for (i = 0; i < 99 && (c = getchar() != EOF); ++i) {
		arr[i] = c;
	}

	len = i + 1;

	for (i = 0; i <= len; ++i) {
		if (arr[i] == '{' || '}') {
			brcs_p = HIGH;
			++brcs;
		}
		else if (arr[i] == '(' || ')') {
			brkt_p = HIGH;
			++brkt;
		}
		else
			++k;
	}

	if (brcs_p == HIGH) {
		if ((brcs % 2) != 0)
			printf("\nERROR : Unmatched no. of paranthesis\n");
	}
}
			
