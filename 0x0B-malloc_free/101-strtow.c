#include <stdlib.h>
#include "main.h"

/**
 * count_word - Helper function to count the number of words in a string.
 * @s: String to evaluate.
 *
 * Return: Number of words.
 */
int count_word(char *s)
{
	int in_word = 0;   /* Indicates if currently inside a word */
	int word_count = 0; /* Number of words counted */

	while (*s)
	{
		if (*s == ' ')
			in_word = 0;
		else if (in_word == 0)
		{
			in_word = 1;
			word_count++;
		}
		s++;
	}

	return (word_count);
}

/**
 * strtow - Splits a string into words.
 * @str: String to split.
 *
 * Return: Pointer to an array of strings (Success)
 * or NULL (Error).
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i = 0, word_start = 0, len = 0, words, char_count = 0, start = 0, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **)malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	while (i <= len)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (char_count)
			{
				end = i;
				tmp = (char *)malloc(sizeof(char) * (char_count + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[word_start] = tmp - char_count;
				word_start++;
				char_count = 0;
			}
		}
		else if (char_count++ == 0)
			start = i;
		i++;
	}

	matrix[word_start] = NULL;

	return (matrix);
}
