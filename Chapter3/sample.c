#include <stdio.h>
#include <string.h>
#include <limits.h>

void itoa(int n, char s[]);
void reverse(char s[]);

int main()
{
    int num = INT_MIN;
    char str[10];
    
    printf("INTEGER: %d\n", num);
    itoa(num, str);
    printf("STRING : %s\n", str);
}

void itoa(int n, char s[])
{
    int i, sign;
    long long int num = n;

    if ((sign = num) < 0)           /* record sign */
    {
        num = -num;                 /* make n positive */
    }

    i = 0;
    do                              /* generate digits in reverse order */
    {
        s[i++] = num % 10 + '0';    /* get next digit */
    } while ((num /= 10) > 0);      /* delete it */

    if (sign < 0)
    {
        s[i++] = '-';
    }

    s[i] = '\0';
    reverse(s);
}

void reverse(char s[])
{
    int c, i, j;

    for (i=0, j=strlen(s)-1; i<j; i++, j--)
    {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}



