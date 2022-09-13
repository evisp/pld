#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int is_palindrome(char *text);

/**
 * main - entry point
 *
 * Return: 0
 */
int main()
{
        char *text;
	int check;

	text = "nooooooon";

	check = is_palindrome(text);

	if (check == 1)
		printf("String is a palindrome\n");
	else
		printf("String is not a palindrome\n");

	return 0;
}

/**
 * is_palindrome - checks if string is palindrome
 * @text: string to check
 *
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *text)
{
	int i, len = 0;
	bool palindrome = 1;

	for (i = 0; text[i]; i++)
		len++;

	for (i = 0; i < len / 2; i++)
	{
		if (text[i] != text[len - 1 - i])
		{
			palindrome = 0;
			break;
		}
	}
	if (palindrome == 1)
		return 1;
	else
		return 0;

	return 0;
}
