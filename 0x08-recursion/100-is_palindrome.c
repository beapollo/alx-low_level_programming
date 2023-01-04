#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - prints a string followed by a new line
 * @str: string to print
 *
 * Return: void
 */
int _strlen_recursion(char *str)
{
	if (*str)
	{
		return (1 + _strlen_recursion(str + 1));
	}
	else
	{
		return (0);
	}
}
/**
 * isPalindrome - checks if a string palindrome
 * @str: a string to be checked
 * @ai: first index of a string
 * @zi: last index of a string
 *
 * Return: 1 if a string is a palindrome
 */
int isPalindrome(char *str, int ai, int zi)
{
	if (ai == zi)
	{
		return (1);
	}
	if (str[ai] != str[zi])
	{
		return (0);
	}
	else if (ai < zi + 1)
	{
		return (isPalindrome(str, ai + 1, zi - 1));
	}
	else
	{
		return (1);
	}
}
/**
 * is_palindrome - prints 1 a palindrome string
 * @s: a string to be checked
 *
 * Return: 1 if palindrome
 */
int is_palindrome(char *s)
{
	int lIndex = 0;
	int len = 0;

	len = _strlen_recursion(s);
	if (len == 0 || len == 1)
		return (1);
	else
		return (isPalindrome(s, lIndex, len - 1));
}
