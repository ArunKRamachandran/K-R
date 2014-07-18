#include<stdio.h>
#define SIZE 100

int binsearch(int x, char v[], int n);
int binsearch2(int x, char v[], int n);

int steps1 , steps2;
main()
{
	char ar[] = {1, 2, 3, 4, 5, 6, 7, 8};
	int s = 2, n, i, j;
	extern int steps1, steps2;

	steps1 = 0; 
	steps2 = 0;
	n = sizeof(ar);
/*	i = binsearch(s, ar, n);
	if (i == -1)
		printf("\nbinsearch1 : Number Not found%d", steps1);
	else 
		printf("\nbinsearch1 : No. is found%d", steps1);
*/
	j = binsearch2(s, ar, n);
	if (j == -1)
		printf("\nbinsearch 2:No.not found%d", steps2);
	else
		printf("\nbinsearch 2:No found%d", steps2); 
}
/*
int binsearch(int s,char ar[], int x)
{
	int low, high, mid;
	extern int steps1;

	low = 0;
	high = x - 1;
	while (low <= high) {
		++steps1;
		mid = (low + high) / 2;
		if (s < ar[mid]) {
			++steps1;
			high = mid + 1;
		}
		else if (s > ar[mid]) {
			++steps1;
			low = mid + 1;
		} 
		else 
			return mid;
	}
	return -1;
}
*/
int binsearch2(int s, char ar[], int x)
{
	int low, high, mid;
	extern int steps2;

	low = 0;
	high = x - 1;
	while (low <= high) {
		++steps2;
		mid = ( low + high ) / 2;
		if (s < ar[mid]) {
			++steps2;
			high = mid + 1;
		}
		else {
			++steps2;
			low = mid + 1;
		} 
	}
	if (s == mid) 
		return mid;
	else 
		return -1;
} 
