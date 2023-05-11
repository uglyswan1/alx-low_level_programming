#include "main.h"
int is_palindrome2(char *s, int i);
int is_palindrome3(char *s, int i, int j);
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: string
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
if (*s == 0)
{
return (1);
}
return (is_palindrome2(s, 0));
}
/**
 * is_palindrome2 - returns length of string
 * @s: string
 * @i: recursion time
 * Return: another recursion
 */
int is_palindrome2(char *s, int i)
{
if (s[i] != '\0')
{
return (is_palindrome2(s, i + 1));
}
return (is_palindrome3(s, i - 1, 0));
}
/**
 * is_palindrome3 - returns 1 if string is a plaindrome else 0
 * @s: string
 * @i: length of string
 * @j: iteration
 * Return: 1 or 0
 */
int is_palindrome3(char *s, int i, int j)
{
if (s[j] == s[i])
i{
return (is_palindrome3(s, i - 1, j + 1));
return (1);
}
else
{
return (0);
}
return (is_palindrome3(s, i - 1, j + 1));
}
