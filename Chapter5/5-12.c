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
	int start_m = 0, tab_n = 0, i, copy;
	char c;

	start_m = atoi(*++argv);	
	tab_n   = atoi(*++argv);
	copy    = tab_n;
	printf("m = %d, n = %d\n", start_m, tab_n);
/*------creating Tab stops-------*/
	for (i = 0; i < 5; i++, mul++)
		tabs[i] = tab_n * mul;
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
				for (z = 0; (c = getchar()) != EOF; z++)
					chr_arr[z] = c;
				array_len = z;
				printf("Length : %d\n", array_len);
				entab(array_len,copy);
			}
			break;
		case 2: 
			break;
	}
}

int j;

void entab(int array_len, n)
{
	int tot = 0, nc = 0, nsp = 0, diff = 0, k = 0, c, i;
	int extra_spaces = 0, tot_spaces, var = 0, extra_tot = 0;

	j = 0;
/*------taking the given "n" no.of characters--------*/ 	
	for (z = 0; z <= n; z++) 
		new_arr[z] = chr_arr[z];

	for (i = z; i <= array_len; i++)

				
}
