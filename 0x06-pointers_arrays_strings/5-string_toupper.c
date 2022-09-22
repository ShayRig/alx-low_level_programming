#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @str: string to be changed
 *
 * Return: adress tp the string
 */

char *string_toupper(char *str)
{
int 1 = 0;

while (str[i] != '\0')
{
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
	i++
}
return (str);
}
