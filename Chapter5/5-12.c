#include<stdio.h>
#include<string.h>

#define CLEAR 0

void entab(int,int);
void next_tabs();

int tabs[5], tabs_len;
char chr_arr[50], new_arr[50];

main(int argc, char *argv[])
{
	int count = argc, mul = 1, z = 0, n, array_len;
	int start_m = 0, tab_n = 8, i, m;
	char c;

	start_m = atoi(*++argv);	
	tab_n   = atoi(*++argv);
	m       = start_m;
	printf("m = %d, n = %d\n", start_m, tab_n);
/*------creating Tab stops-------*/
	for (i = 0; i < 5; i++, mul++)
		tabs[i] = tab_n * mul;
	tabs_len = i;
/*------print tab stops if required
	for (i = 0; i < 5; i++)  
		printf("tabs[%d] = %d\n", i, tabs[i]);
---------------------------------*/
	printf("Choose a Process : \n");
	printf("1 : To process Entab\n");
	printf("2 : To process Detab\n");
	scanf("%d", &n);

	switch (n) {
		case 1: {
				printf("Enter some characters with spaces\n");
				for (z = 0; (c = getchar()) != EOF; ++z)
					chr_arr[z] = c;
				array_len = z - 1;
				printf("Length : %d\n", array_len);
				entab(array_len,m);
			}
			break;
		case 2: 
			break;
	}
}

int j;

void entab(int array_len,int  m)
{
	int tot = 0, nc = 0, nsp = 0, diff = 0, k = 0, c, i, d, z;
	int extra_spaces = 0, tot_spaces, var = 0, extra_tot = 0;

	j = 0;
	d = tabs[j] - m; 
	printf("diff = %d\n", d);
/*------taking the given "n" no.of characters--------*/ 	
	for (z = 0; z < m; z++) { 
		new_arr[z] = chr_arr[z];
		k++;
	}
/*------setting values of "tot","nc" & k -----------*/
	tot = z;
	nc  = z;
/*------start accessing array elements--------------*/
	for (i = z; i <= array_len; i++) {
//		c = chr_arr[z];
		printf("%c\n", c);
		if (c != ' ') {/*if c == a character*/
			tot++;
			nc++ ;
			new_arr[k] = c;
			k++;
			if (nc == tabs[j]) {
				next_tabs();
				tot  = CLEAR;
				nc   = CLEAR;
				nsp  = CLEAR;
				diff = CLEAR;
			}
		}
		if (c == ' ') {
			nsp++;
			tot++;//below, d is the diff b/w consecutive tab stops
			if (chr_arr[i + 1] != ' ' || EOF) {
				tot_spaces  = nsp;
				diff = tabs[j] - nc;
				if (nsp < diff) 
					for (var = 0; var < nsp; var++, k++) 
						new_arr[k] = 'x';
				if (nsp == diff)
					new_arr[k++] = '\t';
				if (nsp > diff) {
					extra_spaces = nsp - diff;
					new_arr[k] = '\t';
					k++;
					for (var = 1; var < extra_spaces; var++)
						new_arr[k++] = 'x';
				}
				if (tot == d) {
					next_tabs();
					tot  = CLEAR;
					nc   = CLEAR;
					nsp  = CLEAR;
					diff = CLEAR;
				}
			}
		}
	}
	printf("%d\n", k);
	for (i = 0; i <= k; i++)
		printf("%c", new_arr[i]);
}

void next_tabs()
{
	if (j >= tabs_len)
		printf("Empty Tab Stops\n");
	if (j < tabs_len)
		j++;
}
