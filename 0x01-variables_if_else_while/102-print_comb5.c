#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit
 *
 * Return: Always 0.
 *
 */

int main(void)

{
int num3, num4;

for (num3 = 0; num3 <= 98; num3++)
{
for (num4 = num3 + 3; num4 <= 99; num4++)
{
putchar((num3 / 10) + '0');
putchar((num3 % 10) + '0');
putchar(' ');
putchar((num4 / 10) + '0');
putchar((num4 % 10) + '0');

if (num3 == 98 && num4 == 99)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');

return (0);
}
