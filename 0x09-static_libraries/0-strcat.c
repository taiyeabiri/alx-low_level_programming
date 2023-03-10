#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the destination string where the resulting string will be stored
 * @src: the source string that will be concatenated to the end of dest
 *
 * Return: a pointer to the destination string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	/* Find the length of the destination string */
	i = 0;
	while (dest[i] != '\0')
	{
	i++;
	}

	/* Append the source string to the end of the destination string */
	j = 0;
	while (src[j] != '\0')
	{
	dest[i] = src[j];
	i++;
	j++;
	}

	/* Add a null terminator to the end of the resulting string */
	dest[i] = '\0';

	/* Return a pointer to the destination string */
	return (dest);
}
