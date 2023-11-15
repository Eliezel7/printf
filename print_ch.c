#include "main.h"

/**
 * printf_ch -print a character to the output
 * @val: arguments
 * Return: 1
 */

int printf_ch(va_list val)
{
	char st;

	st = va_arg(val, int);

	printf("\n Enter the character \n");
	scanf("%c", &st);
	_putchar(st);
	return (1);
}
