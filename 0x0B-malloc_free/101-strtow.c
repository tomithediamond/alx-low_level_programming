#include "main.h"
#include <stdlib.h>

/**
 * word_count - helper function that counts the number of words in a string
 * @s: the string
 * Return: number of words in the string
 */

int word_count(char *s)
{
	int i, j, tot;

	j = 0;
	tot = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			tot = 0;
		else if (tot == 0)
		{
			tot = 1;
			j++;
		}
	}
	return (j);
}

/**
 * strtow - splits a string into words.
 * @str: string to split into words.
 * Return: on success, a pointer to an array of strings (words)
 * on failure, NULL
 */

char **strtow(char *str)
{
	int j, k, l, len, wrd, hi, bye;
	char *tmp, **matrix;

	k = 0, l = 0, len = 0;

	while (*(str + len))
		len++;
	wrd = word_count(str);
	if (wrd == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (wrd + 1));
		if (matrix == NULL)
			return (NULL);

	for (j = 0; j <= len; j++)
	{
		if (str[j] == ' ' || str[j] == '\0')
		{
			if (l)
			{
				bye = j;
				tmp = (char *) malloc(sizeof(char) * (l + 1));
				if (tmp == NULL)
					return (NULL);
				while (hi < bye)
					*tmp++ = str[hi];
				*tmp = '\0';

				matrix[k] = tmp - l;
				k++;
				l = 0;
			}
		}
		else if (l++ == 0)
			hi = j;
	}

	matrix[k] = NULL;
	return (matrix);
}
