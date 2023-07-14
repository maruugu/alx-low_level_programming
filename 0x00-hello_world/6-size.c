#include <stdio.h>
/**
*main - Entry point
*Return: always 0 (sucess)
*/
int mai(void)
{
	printf("Size of a char: %lu byte(s)", sizeof(char));
	printf("Size of the int: %lu byte(s)", sizeof(int));
	printf("Size of a long int: %lu byte(s)", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)", sizeof(long long int));
	printf("Size of a float: %lu byte(s)", sizeof(float));
	return (0);
}
