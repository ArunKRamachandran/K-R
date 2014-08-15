/* ERROR checking option included */
#include<stdio.h>
#include<string.h>

int day_of_year(int, int, int);
void  month_day(int year, int yearday, int *, int *);

static char daytab[2][13] = {
	{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31},
	{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31}
};
int yr, yrdy, mn, dy, x, y;
int *pmonth = &mn, *pday = &dy;

int main()
{
	int i, j, r1 = -1, r2;
	char c;

	printf("Press any Key to Continue....\n"); 	
	printf("PRESS - 1 : to process - 'day of year'\n");
	printf("PRESS - 2 : to process - 'month day'\n");
	scanf("%d", &i);

	switch(i) {
		case 1:{
			printf("year:  month:  day  \n");
			scanf("%d%d%d", &yr, &mn, &dy);
			r1 = day_of_year(yr,mn,dy);
			if (r1 == -1)
				printf("ERROR\n");
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
	leap = year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
	if (month < 1 || month > 12)              /* error checking */
		return -1;
	if (day < 1 || day > daytab[leap][month]) /* error checking- if date is not compatiable with the given month */
		return -1;
	for (i = 1; i < month; i++)
		day += daytab[leap][i];
	return day;
}
/*month day : set month, day from day of year */
void month_day(int year, int yearday, int *pmonth, int *pday)
{
	int i, leap;
	if (year < 1) {
		*pmonth = -1;
		*pday = -1;
	}
	leap = year % 4 == 0 && year % 100 != 0 || year % 100 == 0;
	for (i = 1; yearday > daytab[leap][i]; i++)
		yearday -= daytab[leap][i];
	if (i > 12 || yearday >daytab[leap][i]) {
		*pmonth = -1;
		*pday = -1;
		return;
	}
	else {
		*pmonth = i;
		*pday = yearday;
		return;
	}
}
