#include <stdio.h>

/**
 * main - The program is to print alphabets in both upper and lower case
 *
 * Return: 0 (success)
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	for (i = 'A' ; i <= 'Z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
