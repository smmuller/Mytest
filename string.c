#include <stdio.h>
#define STLEN 30
int counter(char *a);
int main(void)
{
	char words[STLEN];
	printf("Enter a string.\n");
	fgets(words, STLEN, stdin);
	fputs(words, stdout);
	fputs(words, stdout);
	int a= counter(words);
	printf("Number of words: %d\n", a);
	return 0;
}

counter(char *a)
{
	int counter;
	while (*a != '\0')
	{
		if (*a == ' ')
			counter++;
		*a++;
	}
	return ++counter;
}
