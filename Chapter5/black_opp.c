#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define CLEAR 0

void entab(int);
void next_tabs();

int tabs[5], tabs_len;
char new_arr[50], chr_arr[50];

main(int argc, char *argv[])
{
	int i = 0, z = 0, count = argc, k = 8;
	int n, array_len;
	char c;
	/*-------- taking given arguments into an array----*/
	if ( argc <= 1) {   /* if no arguments are given */
		for (i = 0; i < 5; i++) {
			tabs[i] = k; 
			k = k + 8;
		}
		tabs_len = i;
	}
	else {		    /* if some arguments are given */
		while (--argc) 
			tabs[i++] = atoi(*++argv);
			
		tabs_len = i;
	}
	/*------------------------------------------------*/
	printf("Choose a process.. \n");
	printf("1 : To procee Entab\n2 : To process Detab\n");
	scanf("%d", &n);
	switch (n) {
		case 1: {
				printf("Enter some characters with white spaces..\n");
				for (z = 0; (c = getchar()) != EOF; z++) {
					chr_arr[z] = c;
					array_len = z;
				}
				printf("Length : %d\n", array_len);
				entab(array_len);
			}
			break;
		case 2:
			break;
	}
/*	printf("%d\n", array_len);
	for (j = 0; j <= array_len; j++)
		printf("%c", chr_arr[j]);		*/
}

int j;

void entab(int array_len)
{
	int tot = 0, nc = 0, nsp = 0, diff = 0, k = 0, c;
	int extra_spaces = 0, tot_spaces, var = 0, i, extra_tot = 0;
	j = 0;
	for (i = 0; i <= array_len; i++) {   /* main loop - to process all elements stored */
		c = chr_arr[i];
		if (c != ' ') {               /* if it is a character                       */
			tot++;
			nc++;
			new_arr[k] = c;      /* copying character into new array           */
			k++;
			if ( nc >= tabs[j]) {
				next_tabs();  /* moving tab stops ...                       */
				tot  = CLEAR;
				nc   = CLEAR;
				nsp  = CLEAR;
				diff = CLEAR;
			}	
		}
	
		if (c == ' ') {
			nsp = nsp + 1;
			tot++;
			if (chr_arr[i + 1] != ' ' || (tot == array_len)) { /* i.e if the very nxt one  after space is a character */
				tot_spaces = nsp;/*taking tot no. of spaces               */
				diff = tabs[j]  - nc;
				if (nsp < diff) {
					for (var = 0; var < nsp; var++) {
						new_arr[k] = 'x';
						k++;
					}
				}
				if (nsp == diff) {
					new_arr[k] = '\t';
					k++;
				}
				if (nsp > diff) {
					extra_spaces = nsp - diff;
					new_arr[k] = '\t';
					k++;
					for (var = 1; var < extra_spaces; ++var) {
						new_arr[k] = 'x';
						++k;
					}
				}
				if (tot > tabs[j]) {
					extra_tot = tot - tabs[j];
					tot  = CLEAR;
					nc   = CLEAR;
					nsp  = CLEAR;
					next_tabs();
					tot  = extra_tot;
					nsp = extra_tot;
				}
			}
			
		}
	}
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






