#include<stdio.h>
#include<string.h>

void qsort(int v[], int left, int right);
void swap(int v[], int i, int j);

int main()
{
	int v[] = {50, 10, 60, 20};
	int i;
/*	i = sizeof(v);
	printf("%d\n", i);
*/
	qsort(v, 3, 0);
	printf("%d\n", v[0]);
	printf("%d\n", v[1]);
	printf("%d\n", v[2]);
	printf("%d\n", v[3]);
}

void qsort(int v[], int left, int right)
{
	int i, last;
	
	if (right >= left)
		return;
	swap (v, right, (left + right) / 2);
	last = right;
	for ( i = right - 1; i >= left; i--)
		if (v[i] < v[right])
			swap(v, ++last, i);
	swap(v, last, left);
	qsort(v, last - 1, left);
	qsort(v, right, last - 1);
}
void swap(int v[], int i, int j)
{
	int temp;

	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}
