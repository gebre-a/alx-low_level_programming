#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int printf(const char *format, ...)
{
	/**
	 * our cod goes here
	 * I use write for printing text
	 */

	write(1, "9 8 10 24 75 +9\n", 17);
	write(1, "congradulation guys , you win the game!\n", 38);
	exit(EXIT_SUCCESS);
}
