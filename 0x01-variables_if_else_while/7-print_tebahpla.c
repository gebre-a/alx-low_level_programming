#include <stdio.h>
/**
 * main - entry point
 * Description: Print the alphabet in reverse order in lowercase.
 * Return: 0 (success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	}
	putchar('\n');

	return (0);
}
