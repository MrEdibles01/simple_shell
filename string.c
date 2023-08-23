#include "shell.h"

/**
 * _strlen - returns the string length
 * @s: string length to check
 *
 * Return: string integer length
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
 * _strcmp - lexicogarphic comparison of two strangs.
 * @s1: first strang
 * @s2: second strang
 *
 * Return: if s1 < s2 negative, if s1 > s2 positive, if s1 == s2 zero
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 < *s2 ? -1 : 1);
}

/**
 * starts_with - checks if needle begins with haystack
 * @haystack: the string to search
 * @needle: substring to find
 *
 * Return: next char of haystack address or NULL
 */
char *starts_with(const char *haystack, const char *needle)
{
	while (*needle)
		if (*needle++ != *haystack++)
			return (NULL);
	return ((char *)haystack);
}

/**
 * _strcat - it concatenates two strings
 * @dest: buffer for dest
 * @src: buffer for src
 *
 * Return: destination buffer pointer
 */
char *_strcat(char *dest, char *src)
{
	char *ret = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (ret);
}
