#include "main.h"
/**
 * printf_stringg - print a string to use
 * @val: argument that we will use in our parameter
 * Return: The length of the string
 */

int printf_stringg(va_list val)
{
	char *st;
	int i;
	int len;

	st = va_arg(val, char *);
	if (st == NULL)
	{
		st = "(null)";
		len = _strlen(st);
		int i = 0;
		while (i < len) {
			_putchar(st[i]);
			i++;
		}
		return (len);
		else
		{
			len = _strlen(str);
			int i = 0;
			while (i < len) {
				_putchar(str[i]);
				i++;
			}
			return (len);
		}

