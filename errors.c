#include "shell.h"

/**
 * _eputs - prints input strings
 * @str: string to be printed
 *
 * Return: Nil
 */
void _eputs(char *str)
{
	int i = 0;

	if (!str)
		return;
	while (str[i] != '\0')
	{
		_eputchar(str[i]);
		i++;
	}
}

/**
 * _eputchar - writes the char c to standard error
 * @c: The chr to print
 *
 * Return: 1 on success.
 * -1 is returned on error, and set errno appropriately.
 */
int _eputchar(char c)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(2, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}

/**
 * _putfd - writes char c to given filedescriptor
 * @c: The char to print
 * @fd: The fd to write to
 *
 * Return: 1 on success.
 * -1 is returned on error, and set errno appropriately.
 */
int _putfd(char c, int fd)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(fd, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}

/**
 * _putsfd - prints input string
 * @str: string to be printed
 * @fd: the fd to write to
 *
 * Return: the number of characters put
 */
int _putsfd(char *str, int fd)
{
	int i = 0;

	if (!str)
		return (0);
	while (*str)
	{
		i += _putfd(*str++,
				}
				return (i);
				}
