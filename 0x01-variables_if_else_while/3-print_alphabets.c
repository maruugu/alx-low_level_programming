#include <stdio.h>
/**
 * main - Enrty point
 * discription: 'the alphabet in lowercase'
 * Return: always 0
 */
int main(void)
{
int ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
putchar(ch);
for (ch = 'A' ; ch <= 'Z' ; ch++)
putchar(ch);
return (0);
}
