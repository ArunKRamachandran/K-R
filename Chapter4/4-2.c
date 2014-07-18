#include<stdio.h>
#include<ctype.h>
#include<string.h>

double atof(char s[]);

main()
{
	int i, j, c;
	double rslt;
	char num[10];

	for (i = 0; i <= 10; ++i)
		num[i] = '\0';

	printf("Enter a floating point number followed by 'e' or 'E' : \n");
	for (i = 0; i < 10 && ( (c = getchar()) != '\n'); ++i)
		num[i] = c;

	rslt = atof(num);

	printf("result : %f\n", rslt);
}

double atof(char s[])
{
	double val, power, rtrn;         /* initilaizing variables */
	int i, sign, x, prdt = 1;
	char c, j;

	for ( i = 0; isspace(s[i]); i++) /*skip white spaces*/
		;

	sign = (s[i] == '-') ? -1: 1;

	if (s[i] == '+' || s[i] == '-')
		i++;

	for (val = 0.0; isdigit(s[i]); i++)
		val = 10.0 * val + (s[i] - '0'); /* converting to double precesion*/

	if (s[i] == '.')
		i++;

	for (power = 1.0; isdigit(s[i]); i++) {  /* " " */
		val = 10.0 * val + (s[i] - '0');
		power *= 10;
	}

	rtrn = sign * val / power; /* calculating  value*/

	if (s[i] == 'e' || s[i] == 'E') {
		c = s[++i];
		j = s[++i] - '0'; /* converting Asci code to corresponding value */
	/*	printf("c : %c\n", c);
		printf("j : %d\n", j-'0');*/
		for (x = 0; x < j; ++x)
			prdt = 10 * prdt;

		if (c == '-')
			return rtrn / prdt;

		if (c == '+')
			return rtrn * prdt;

		}
	else 
		return rtrn;
}
