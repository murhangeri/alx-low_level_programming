#include "main.h"

int palindrome(char *s, int b, int ssize);
int _strlen_recursion(char *s);
/**
 * is_palindrome - palindrome function
 * @s: string
 *
 * Return: is palindrome
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (palindrome(s, 0, _strlen_recursion(s)));
}

/**
 * palindrome - palindrome
 * @s: string
 * @b: increament
 * @ssize: size
 *
 * Return: is palindrome
 */

int palindrome(char *s, int b, int ssize)
{
	if (*(s + b) != *(s + ssize - 1))
	{
		return (0);
	}
	if (b > ssize)
		return (1);
	else
		return (palindrome(s, b + 1, ssize - 1));
}

/**
 *  _strlen_recursion - function
 *  @s: input
 *   Return: size
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
		i++;
		i += _strlen_recursion(s + 1);
	}
	return (i);
}
