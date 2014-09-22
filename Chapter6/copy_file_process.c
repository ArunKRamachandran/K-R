#include<stdio.h>
#include<string.h>

int main()
{
	FILE *fileptr;
	int x = 1, count_lines = x;
	char filechar[40], chr, word[20];

	printf("Enter a file name : ");
	scanf("%s", filechar);
	fileptr = fopen(filechar, "r");
	// extract character from filr and store in chr
	chr = getc(fileptr);
	while (chr != EOF) {
		if (chr != ' ' && (count_lines == x ) && chr != '\n') 
			printf("%c", chr);
		if (chr == ' ' || chr == '\n')
			printf("  %d\n", count_lines);
				
		// count whenever a new line is encountered
		if (chr == '\n') {
			count_lines = x + 1;
			x++;
		}
		//take next character from file
		chr = getc(fileptr);
	}
	fclose(fileptr); // close file
	//printf("No.of lines : %d\n", count_lines);
	return 0;
}
