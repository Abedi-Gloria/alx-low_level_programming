#include <stdio.h>
#include "main.h"

/**
 * _strlen - function for determinig length of a string
 *
 * @s: a string of characters
 * Return: returns the value of i
 */

int _strlen(char *s)
{
	int i = 0;
	for (; *s != '\0'; s++)
	{
		
		i++;
	}
	return (i);
}
