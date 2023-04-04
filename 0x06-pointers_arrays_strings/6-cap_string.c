#include "main.h"


/**
 * cap_string - capitalizes all words of a string.
 * @z: the string
 * Return: modified z
 */


char *cap_string(char *z)
{
	int in;

	in = 0;
	while (z[in])
	{
		while (!(z[in] >= 'a' && z[in]<= 'z'))
		in++;

		if (z[in - 1] == ' ' ||
			z[in - 1] == '\t' ||
			z[in - 1] == '\n' ||
			z[in - 1] == ',' ||
			z[in - 1] == ';' ||
			z[in - 1] == '.' ||
			z[in - 1] == '!' ||
			z[in - 1] == '?' ||
			z[in - 1] == '"' ||
			z[in - 1] == '(' ||
			z[in - 1] == ')' ||
			z[in - 1] == '{' ||
			z[in - 1] == '}' ||
			in == 0)
			z[in] -= 32;
		in++;
	}
		return (z);
}
