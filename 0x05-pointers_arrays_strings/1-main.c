#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int a;
int b;

a = 98;
b = 42;
printf("a=%d, b=%d\n", a, b);
printf("Size of type 'int' on my computer: %lu bytes\n", sizeof(int));
printf("a=%d, b=%d\n", a, b);
return (0);
}
