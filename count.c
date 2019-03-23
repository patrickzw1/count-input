#include <stdio.h>
#include <ctype.h>

int main (void)
{
	unsigned long int charcount = 0;
	unsigned long int wordcount = 0;
	unsigned long int linecount = 0;
	int a, last;
	int separator = 1;

	//take character from shell to a and check it
	//If input is newline, then line++
	//otherwise it will be space or word, so check it space or not
	//newline and space all follow a word so we need to change separator to 1 for word count

	for (last = '\n'; (a = getchar()) != EOF; last = a)
	{
		charcount++;
		if (a == '\n')
		{
			linecount++;
			separator = 1;
		}
		else
		{
			if (isspace(a))
			{
				separator = 1;
			}
			else if (a == 39)
			{
				separator = 0;
			}
			else if (a <65)
			{
				separator = 1;
			}
			else if (a > 90 && a < 97)
			{
				separator = 1;
			}
			else if (a > 122)
			{
				separator = 1;
			}
			/*else if (a == 46)
			{
				separator = 1;
			}
			else if (a >= 48 && a <= 57)
			{
				separator = 1;
			}*/
			else
			{
				wordcount += separator;
				separator = 0;
			}
		}
	}
	//add one line for last line because it will not go in the loop to add line
	if (last != '\n')
	{
		linecount++;
	}
	printf ("%lu %lu %lu\n", charcount, wordcount, linecount);
	return 0;
}
