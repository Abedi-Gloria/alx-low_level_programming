#include <stdio.h>
#include "main.h"

/**
 * _puts - function containg a string of characters
 * 
 * @str: string of characters
 */
void _puts(char *str)
{
    for (; *str != '\0'; str++)
    {
        _putchar(*str);
    }

    _putchar('\n');
}
