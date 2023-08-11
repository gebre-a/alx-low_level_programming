#include <stdio.h>
/**
 * main - entry point
 * Description: Use  function to print the alphabet in lowercase.
 * Return: 0 (success)
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
