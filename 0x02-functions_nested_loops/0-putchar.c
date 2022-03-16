<<<<<<< HEAD
#include "main.h"

/**
 * main - prints _putchar
 *
 * Description: prints _putchar
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char text[9] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');

=======
#include <stdio.h>
#include "main.h"

/**
 * main - Prints Holberton as a message.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int str[] = {72, 111, 108, 98, 101, 114, 116, 111, 110};
	int count, sz;

	sz = sizeof(str) / sizeof(int);
	for (count = 0; count < sz; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
>>>>>>> 4bc7020a1f659f9acc450d3be777136484d1a116
	return (0);
}
