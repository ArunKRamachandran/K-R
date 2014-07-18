#include<stdio.h>

/* to check a c program for errors */

#define HIGH 1
#define LOW 0

void design();
void  brcsf(int brcs);
void brktf(int brkt);
void sqf(int sq);
void dqf(int dq);

main()
{
	int c, i, len = 0, brkt_p = 0, brcs_p = 0 ,dq_p = 0, sq_p = 0;
        int  sq = 0, dq = 0, brcs = 0, brkt = 0;
	char arr[200];

	printf("\nEnter a  C program\n");
	for ( i = 0; i < 199 && (c = getchar()) != EOF; ++i) {
		arr[i] = c;
		if (c == '{' || '}') {
			brcs_p = HIGH;
			++brcs;
		}
		if (c == '(' || ')') {
			brkt_p = HIGH;  /* checking for bracket */
			++brkt;
		}
		if (c == 34) {
			dq_p = HIGH;
			++dq;	
		}
		if (c == 39) {
			sq_p = HIGH;
			++sq;
		}
	}
        printf("\n");	
	/* design(); */

        len = i + 1;
	if (brcs_p == HIGH) 
		brcsf(brcs);

	if (brkt_p == HIGH)
		brktf(brkt);
	
	if (sq_p == HIGH)
		sqf(sq);

	if (dq_p == HIGH)
		dqf(dq);

/*	if (l = m = n = o = 0)
		printf("\nNo Syntax Error In Code\n");*/
}

void design()
{
	int i, c = 176;

	for(i = 0; i <= 15; ++i) {
		printf("%c", c);
	}
	printf("\n");
}
void brcsf(int brcs)
{
	int n, i = 0;

	n = brcs;

	if (n % 2 != 0) {
		printf("\nERROR : Missing/Unmatched  Braces\n");
		
	}
	else
		++i;
}

void brktf(int brkt)
{
	int n, i = 0, x, y;
	
	n = brkt;

	if (n % 2 != 0) {
		printf("\nERROR : Unmatched no.of BRacket's\n");
	
	}
	else 
		++i;
	
/*	if (x != y)
		printf("\nUnmatched no.of paranthesis\n"); */
}

void sqf(int sq)
{
	int n, i = 0;
	
	n = sq;
	if (n % 2 != 0) {
		printf("\nERROR : Check for no.of single quotes used\n");
	}
	else
		++i;
}	

void dqf(int dq)
{
	int n, i = 0;

	n = dq;
	if (n % 2 != 0) {
		printf("\nERROR : Check for no.of Double Quotes used\n");
		++i;
	}

}
