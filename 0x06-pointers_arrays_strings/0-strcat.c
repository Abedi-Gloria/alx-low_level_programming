#include <stdio.h>
#include "main.h"

/**
 * _strcat - a pointer function which concatenates two strings
 * @ dest: an array of characters 
 * @ src: an array of characters
 * 
 * Return: returns a pointer to the resulting string 
 */

char *_strcat(char *dest, char *src)
{
	int i,j;
	i = 0;
	while (dest[i])
	{
		i++;
	}
	for (j = 0; (dest[i + j] = *src++) != '\0'; j++)
	{
	}
	return(dest);
}