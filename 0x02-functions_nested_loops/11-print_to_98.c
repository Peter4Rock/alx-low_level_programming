#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Entry point.
 *
 * @n: Inputed integer.
 *
 * Description: prints all natural numbers from n to 98.
 *
 * Return: void
 */
void print_to_98(int n)
{
if (n >= 98)
{
while (n > 98)
{
printf("%d, ", n--);
}
}
else
while (n < 98)
{
printf("%d, ", n++);
}
printf("98\n");
}
