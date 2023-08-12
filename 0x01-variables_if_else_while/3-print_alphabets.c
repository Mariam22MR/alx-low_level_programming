#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha = 'a';
	char capital = 'A';
	/* While loop for alphabet */
	while (alpha <= 'z')
	{
		putchar(alpha); /* print the alphabet */
		alpha++;
	}
	while (capital <= 'Z')
	{
		putchar(capital);
		capital++;
	}
		putchar('\n'); /* Move to the next line */
		return (0);
}
