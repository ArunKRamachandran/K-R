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
	qsort(v, 0, 3);
	printf("%d\n", v[0]);
	printf("%d\n", v[1]);
	printf("%d\n", v[2]);
	printf("%d\n", v[3]);
}

void qsort(int v[], int left, int right)
{
	int i, last;
	
	if (left >= right)
		return;
	swap (v, left, (left + right) / 2);
	last = left;
	for ( i = left + 1; i <= right; i++)
		if (v[i] < v[left])
			swap(v, ++last, i);
	swap(v, left, last);
	qsort(v, left, last - 1);
	qsort(v, last + 1, right);
}
void swap(int v[], int i, int j)
{
	int temp;

	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}
