/* implementing a structure */
#include<stdio.h>
#include<string.h>

struct tag {
	char lname[20];
	char fname[20];
	int age;
	float rate;
};

struct tag my_struct; /* declare the strcture my_struct */

int main()
{
	strcpy(my_struct.lname,"Jensen");
	strcpy(my_struct.fname,"Ted");
	printf("%s\n", my_struct.fname);
	printf("%s\n", my_struct.lname);
	return 0;
}
