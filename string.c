#include <stdio.h>
#define STLEN 14
int main(void)
{
	char words[STLEN];
	printf("Enter a string.\n");
	fgets(words, STLEN, stdin);
	fputs(words, stdout);
	fputs(words, stdout);
	return 0;
}
