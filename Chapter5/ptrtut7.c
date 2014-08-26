/* attempt to use Pointers with 2-D arrays */

#include<stdio.h>
#include<string.h>

#define ROWS 5
#define COLS 10

int multi[ROWS][COLS];

int main(void)
{
	int row, col;
	for (row = 0; row < ROWS; row++) {
		for (col = 0; col < COLS; col++)
			multi[row][col] = row*col;
	}
	for (row = 0; row < ROWS; row++) {
		for (col = 0; col < COLS; col++) {
			printf("%d\n", multi[row][col]);
			printf("Pointer:%d\n", *(*(multi+row) + col));
		}
	}
return 0;
}

