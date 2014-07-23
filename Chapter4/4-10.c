#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

#define MAXOP 100
#define NUMBER '0'
#define MAXVAL 100
#define BUFSIZE 100
#define MAXLINE 100

int sp = 0;
double val[MAXVAL];
char buf[BUFSIZE];
int bufp = 0, li ;
int line[MAXLINE];

int getop(char []);
void push(double);
double pop(void);
int getch(void);
void ungetch(int);
int get_line(int [], int);

/* reverse polish calculator */
main()
{
	int type, l;
	double op2;
	char s[MAXOP];

	while (get_line(line, MAXLINE) != 0) {
		li = 0;
	while ( (type = getop(s)) != EOF) {
		switch (type) {
			case NUMBER:
				push(atof(s));
				break;
			case '+':
				push(pop() + pop());
				break;
			case '*':
				push(pop() * pop());
				break;
			case '-':
				op2 = pop();
				push(pop() - op2);
				break;
			case '/':
				op2 = pop();
				if (op2 != 0.0)
					push(pop() / op2);
				else 
					printf("error : zero divisor\n");
				break;
			case '%':
				op2 = pop();
				if (op2 != 0.0)
					push((int)pop() % (int)op2);
				else
					printf("error\n");
				break;
			case '\n':
				printf("\t%.8g\n", pop());
				break;
		}
	}
	}
	return 0;
}
/*push : push f onto value stack */
void push(double f)
{
	if (sp < MAXVAL)
		val[sp++] = f;
	else
		printf("Error: stack full, cann't push %g", f);
}
/* pop: pop and return top value from stack */
double pop(void)
{
	if (sp > 0)
		return val[--sp];
	else {	
		printf("error : stack empty");
		return 0.0;
	}
}
/*gettop: get next character or operand */
int getop(char s[])
{
	int i, c;

	if (line[li] == '\0')
	       if (get_line(line,MAXLINE) == 0)
			return EOF;
	else
		li = 0;
		
	while ( (s[0] = c = line[li++]) == ' ' || c == '\t')
		;

	s[1] = '\0';
	
/*	i = 0;*/

	if (!isdigit(c) && c != '.')    
		return c; /* not a number */
/*	if (c == '-')                                   | 4 |     section to check negative values 
		if (isdigit(c = getch()) || c == '.')   | - |    if a negative symbol detects 
			s[++i] = c;  negative number 	| 3 |    check whether next character is a number or a  '.' if so 
		else { 					|   |  that is negative number & that will be stored in the array to be returned
			if (c != EOF)			|   |  else return a negative operator to compute 
				ungetch(c);
			return '-';
		} */
	
	i = 0;

	if (isdigit(c)) /* collect integer parts */
		while (isdigit(s[++i] = c = line[li++]))
			;
	if (c == '.')
		while (isdigit(s[++i] = c = line[li++]));
			;
	s[i] = '\0';
	if (line[li] == '\0') 
		li--;
	return NUMBER;
}
int get_line(int line[], int MAX)
{
	int c, i = 0, j = 0;

	while ( --MAX > 0 &&( (c = getchar()) != EOF) )
		line[i++] = c;

	if (c == '\n')
		line[i] = c;

	line[i] = '\0';
	return i;
}

/*int getch(void)
{
	return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c)
{
	if (bufp >= BUFSIZE)
		printf("ungetch: too many characters\n");
	else 
		buf[bufp++] = c;
}*/
