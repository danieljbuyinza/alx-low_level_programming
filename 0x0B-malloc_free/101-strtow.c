#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * count_words - Counts number of words in string
 * @str: Given string
 * Return: Number of words
 */
int count_words(char *str)
{
	int count, i;

	count = 0;
	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
		i++;
	}

	return (count);
}

/**
 * strtow - Splits a string into words
 * @str: Given string
 * Return: Pointer to array of strings
*/
char **strtow(char *str)
{
	int i, j, k, len, words;
	char **arr;

	if (str == NULL || *str == '\0')
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);

	arr = malloc(sizeof(char *) * (words + 1));
	if (arr == NULL)
		return (NULL);

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			len = 0;
			k = i;
			while (str[k] != ' ' && str[k] != '\0')
			{
				len++;
				k++;
			}

			arr[j] = malloc(sizeof(char) * (len + 1));
			if (arr[j] == NULL)
			{
				for (i = 0; i < j; i++)
					free(arr[i]);
				free(arr);
				return (NULL);
			}

			strncpy(arr[j], str + i, len);
			arr[j][len] = '\0';
			i = k;
			j++;
		}
		else
		{
			i++;
		}
	}

	arr[j] = NULL;

	return (arr);
}

