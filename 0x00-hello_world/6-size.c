#include <stdio.h>
/**
  * main - program to comute various variable
  * Return: 0 (success)
*/
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", siizeof(char));
	printf("Size of an int: %lu byte(s)\n", siizeof(int));
	printf("Size of a long int: %lu byte(s)\n", siizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", siizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", siizeof(float));
	return (0);
}
