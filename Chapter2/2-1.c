#include<stdio.h>
#include<limits.h>
#include<float.h>
/* to print the ranges of different data types */

main()
{
	char in[2], ln[2], chr[2], sh[2], uch[2], uin[2], uln[2], ush[2];
	int i = 0;
	

	in[0] = 'i'; in[1] = 'n'; in[2] = 't', in[3] = ' ', in[4] = ' ';
	ln[0] = 'l'; ln[1] = 'o'; ln[2] = 'n'; ln[3] = 'g', ln[4] = ' ', ln[5] = ' ';
	chr[0] = 'c'; chr[1] = 'h', chr[2] = 'a', chr[3] = 'r', chr[4] = ' ', chr[5] = ' ';
	sh[0] = 's', sh[1] = 'h', sh[2] = 'o', sh[3] = 'r', sh[4] = 't', sh[5] = ' ', sh[6] = ' ';
	uch[0] = 'U', uch[1] = 'c', uch[2] = 'h', uch[3] = 'a', uch[4] = 'r', uch[5] = ' ';
	uin[0] = 'U', uin[1] = 'i', uin[2] = 'n', uin[3] = 't', uin[4] = ' ', uin[5] = ' ';
	uln[0] = 'U', uln[1] = 'l', uln[2] = 'o', uln[3] = 'n', uln[4] = 'g', uln[5] = ' ';
	ush[0] = 'U', ush[1] = 's', ush[2] = 'h', ush[3] = 'o', ush[4] = 'r', ush[5] = 't', ush[6] = ' ';

	printf("\n Ranges of different Data Types \n");
	printf("\n");
	printf("Data type    Max      Min\n");
	printf("%s\t   %5d\t %5d\n", in, INT_MAX, INT_MIN);
	printf("%s\t   %5lu %5lu\n", ln, LONG_MAX, LONG_MIN);
	printf("%s\t   %5d\t %5d\n", chr, CHAR_MAX,  CHAR_MIN);
	printf("%s\t   %5d\t %5d\n", sh, SHRT_MAX, SHRT_MIN);
	printf("%s\t   %5d\t %5d\n", uch, i, UCHAR_MAX);
	printf("%s\t   %5d\t %5d\n", uin, i, UINT_MAX);
	printf("%s\t   %5d  %7lu\n", uln, i, ULONG_MAX);
	printf("%s\t   %5d   %5d\n", ush, i, USHRT_MAX);
}
