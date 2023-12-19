#include <stdio.h>
#include <unistd.h>
/**
 * main - prints all single digit numbers of base
 * 10 starting from 0, followed by a new line.
 * Return: Always 0 (success)
 */

int main(void)
{
int e;

for (e = 0; e < 10; e++)
{
putchar(e + '0');
}
putchar('\n');
return (0);
}
