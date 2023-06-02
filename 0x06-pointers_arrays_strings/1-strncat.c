#include "main.h"

/**
 * _strcat  - concate two strings
 * @dest: destination
 * @src: source
 * @n: bytes used from the source
 * Return: points to the destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;

	i=0;
	while(dest[i] != '\0')
	{
	i++;
	}

	j = 0;
	while(j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
