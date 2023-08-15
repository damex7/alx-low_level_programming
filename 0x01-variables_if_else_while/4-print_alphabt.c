#include <stdio.h>

/**
 * main - program to print letters of the alphabet apart from q and e
 *
 * Return: 0 (success)
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
