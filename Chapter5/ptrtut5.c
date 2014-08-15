/* implementing structure poilnter */
#include<stdio.h>
#include<string.h>

struct tag {
	char lname[20];
	char fname[20];
	int age;
	float rate;
};

struct tag my_struct; /* define the structure */
void show_name(struct tag *p);

int main()
{
	struct tag *st_ptr;
	st_ptr = &my_struct;
	strcpy(my_struct.lname,"Jenson");
	strcpy(my_struct.fname,"Ted");
	printf("%s\n",my_struct.fname);
	printf("%s\n",my_struct.lname);
	my_struct.age = 63;
	printf("Calling function\n"); /* pass the pointer */
	show_name(st_ptr);
	return 0;
}

void show_name(struct tag *p)
{
	printf("%s\n", p->fname); /* p points to a structure */
	printf("%s\n", p->lname);
	printf("%d\n", p->age);
}
