#include "main.h"
#include <stdio.h>
/**
 * main - Enrty point
 * description: 'prints the alphabet,in lowercase'
 * Return: always 0.
 */
void print_alphabet(void)
{
	int l;
	for (l = 'a'; l <= 'z'; l++)
	{
		_putchar(l);
	}
	_putchar('\n');
}
