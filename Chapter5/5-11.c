#include<stdio.h>
#include<string.h>
#include<ctype.h>

void entab(int);

int tabs[5], tabs_len;
char new_arr[50], chr_arr[50];

main(int argc, char *argv[])
{
	int i = 0, j = 0, count = argc, k = 8;
	int n, array_len;
	char c;
	/*-------- taking given arguments into an array----*/
	if ( argc <= 1) {   /* if no arguments are given */
		for (i = 0; i < 5; i++) {
			tabs[i] = k; 
			k = k + 8;
		}
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
				for (j = 0; (c = getchar()) != EOF; ++j) {
					chr_arr[j] = c;
					array_len = j;
				}
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
void entab(int array_len)
{
	int i = 0, nc = 0, nsp = 0, k = 0, j = 0, tot = 0, diff = 0, d = tabs[0];
	char c;
	int sp_d = 0, z = 0;

	for (i = 0; i <= array_len; i++) {
		c = chr_arr[i];
		if (c != ' ') {
			new_arr[k] = c;
			k++;
			nc++;
			tot++;
/*			if (tot > tabs[j]) {
				if (j <= tabs_len) {
					j++;
					tot = 0;
					d = tabs[j] - diff;
				}
				else
					printf("Empty Tab Stops\n");
			}
*/		}
		if (c == ' ') {
			nsp++;
			tot++;
			if (tot > tabs[j]) {
				if (j <= tabs_len) {
					j++;
					tot = 0;
					d = tabs[j] - diff;
				}
				else
					printf("Empty Tab Stops\n");
			}
			if (chr_arr[i + 1] != ' ' || EOF) {
				diff = d - nc;
					if (nsp == diff) {
						new_arr[k] = '\t';
						k++;
					}
					if (nsp < diff)  {
						while (nsp--) {
							new_arr[k] = 'x';
							k++;
						}
					}
					if (nsp > diff)  {
						sp_d = nsp - diff;
						new_arr[k] = '\t';
						k++;
						while (sp_d--) {
							new_arr[k] = 'x';
							k++;
						}
					}
			nc = 0;
			nsp = 0;
			sp_d = 0;
			tot = 0;
			}
		}
	}
	for (z = 0; z <= k; z++)
		printf("%c", new_arr[z]);
}




