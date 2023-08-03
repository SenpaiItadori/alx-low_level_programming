#include "main.h"

int checker(char *s, int i, int len);
int length_seeker(char *s);

/**
 * is_palindrome - checks to see is a string is palindrome or not
 * @s: the string
 * Return: 1 if a string is palindrome or 0 otherwise
 */

int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (checker(s, 0, length_seeker(s)));
}

/**
 * length_seeker - returns the length of  a string using recursion
 * @s: the string
 * Return: the length of the string
 */

int length_seeker(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + length_seeker(s + 1));
}

/**
 * checker - checks to see if a string is palindrome
 * @s: the string
 * @i: the iterator
 * @len: the length of the sring
 * Return: 1 or 0 otherwise
 */

int checker(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);

	return (checker(s, i + 1, len - 1));
}
