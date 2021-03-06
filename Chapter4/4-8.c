#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

#define MAXOP 100
#define NUMBER '0'
#define MAXVAL 100
#define BUFSIZE 100

int sp = 0;
double val[MAXVAL];
char buf = 0;
/*int bufp = 0;*/

int getop(char []);
void push(double);
double pop(void);
int getch(void);
void ungetch(int);

/* reverse polish calculator */
main()
{
	int type;
	double op2;
	char s[MAXOP];

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

	while ( (s[0] = c = getch() ) == ' ' || c == '\t')					;
	s[1] = '\0';
	
	i = 0;

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
	
	if (isdigit(c)) /* collect integer parts */
		while (isdigit(s[++i] = c = getchar()))
			;
	if (c == '.')
		while (isdigit(s[++i] = c = getchar()));
			;
	s[i] = '\0';
	if (c != EOF)
		ungetch(c);
	return NUMBER;
}
int getch(void)
{
	int c;
	if (buf != 0)
		c = buf;
	else 
		c = getchar();
	buf = 0;
	return c;
}

void ungetch(int c)
{
	if (buf != 0)
		printf("ungetch : cann't add another value\n");
	else
		buf = c;
}
