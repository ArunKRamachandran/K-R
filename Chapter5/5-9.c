/* using pointers instead of array indexing */
#include<stdio.h>
#include<string.h>

int day_of_year(int, int, int);
void month_day(int year, int yearday, int *, int *);

static char daytab[2][13] = {
	{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31},
	{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31}
};
int yr, yrdy, mn, dy, x, y;
int *pmonth = &mn, *pday = &dy;

int main()
{
	int i, j, r1;
	char c;

	printf("Press any Key to Continue....\n"); 	
	printf("PRESS - 1 : to process - 'day of year'\n");
	printf("PRESS - 2 : to process - 'month day'\n");
	scanf("%d", &i);

	switch(i) {
		case 1:{
			printf("year:  month:  day  \n");
			scanf("%d%d%d\n", &yr, &mn, &dy);
			r1 = day_of_year(yr,mn,dy);
			if (r1 == -1)
				printf("ERROR in VALUES\n");
			else
			printf("result : %d th day\n", r1);
			break;
		}
		case 2:{
			printf("year:  yearday:  \n");
			scanf("%d%d", &yr, &yrdy);
			month_day(yr,yrdy,&mn,&dy);
			if (mn == -1 || dy == -1)
				printf("ERROR\n");
			else
				printf("result : %d month %d th day\n", mn, dy);
			break;
		}
		default :{
			i = 9;
			break;
		}
	}
	return 0;
}
/* day of year : set day of year from month & dat */
int day_of_year(int year, int month, int day)
{
	int i, leap;
	char *p;
	leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
	if (year < 1)			 /* checking error in year */
		return -1;
	if (month < 1 || month > 12)	 /* checking error in month */
		return  -1;  
	p = daytab[leap];
	for (i = 1; i < month; i++)
		day += *(p + i); /* moving pointer through th multi dimensional pointer */
	return day;
}
/*month day : set month, day from day of year */
void month_day(int year, int yearday, int *pmonth, int *pday)
{
	int i, leap;
	char *p;
	leap = year % 4 == 0 && year % 100 != 0 || year % 100 == 0;
	if (year < 1) {
		*pmonth = -1;
		*pday = -1;
	}
	p = daytab[leap];
	for (i = 1; yearday > daytab[leap][i]; i++)
		yearday -= *(p + i);
	if (i > 12 || yearday > *(p + i)) {
		*pmonth = -1;
		*pday = -1;
	}
	else
		*pmonth = i;
		*pday = yearday;
}
