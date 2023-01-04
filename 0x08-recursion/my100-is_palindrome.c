#include "main.h"
#include <stdio.h>
/**
 * isPalindrome - checks if a string palindrome
 * @str: a string to be checked
 * @leftIndex: first index of a string
 * @rightIndex: last index of a string
 *
 * Return: 1 if a string is a palindrome
 */
int isPalindrome(char *str, int leftIndex, int rightIndex)
{
	if (str[leftIndex] != str[rightIndex])
		return (0);
	if (leftIndex == rightIndex && str[leftIndex] == str[rightIndex])
		return (1);
	if (leftIndex == rightIndex - 1 && str[leftIndex] == str[rightIndex])
	{
		return (1);
	}
	return (isPalindrome(str, leftIndex + 1, rightIndex - 1));
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
	char *p;
	p = s;

	while (*p)
	{
		len++;
		p++;
	}
	if (len == 0 || len == 1)
		return (1);
	else
		return (isPalindrome(s, lIndex, len - 1));
}
