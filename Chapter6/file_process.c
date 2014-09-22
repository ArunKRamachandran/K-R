#include<stdio.h>
#include<string.h>

int main()
{
	FILE *fileptr;
	int count_lines = 0;
	char filechar[40], chr;

	printf("Enter a file name : ");
	scanf("%s", filechar);
	fileptr = fopen(filechar, "r");
// extract character from filr and store in chr
	chr = getc(fileptr);
	while (chr != EOF) {
		// count whenever a new line is encountered
		if (chr == '\n') {
			count_lines = count_lines + 1;
		}
		//take next character from file
		chr = getc(fileptr);
	}
	fclose(fileptr); // close file
	printf("No.of lines : %d\n", count_lines);
	return 0;
}
