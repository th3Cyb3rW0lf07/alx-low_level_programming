#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * count_words - Counts the number of words in a string
 * @str: The input string
 *
 * Return: The number of words
 */
int count_words(char *str)
{
	int count = 0, i = 0;

	while (str[i] != '\0')
	{
		while (str[i] == ' ')
			i++;
		if (str[i] != '\0')
		{
			count++;
			while (str[i] != ' ' && str[i] != '\0')
				i++;
		}
	}

	return (count);
}

/**
 * strtow - Splits a string into words
 * @str: The input string
 *
 * Return: A pointer to an array of strings (words),
 *         or NULL if str == NULL or str == "" or if it fails
 */
char **strtow(char *str)
{
	int i, j, k = 0, word_length, word_count;
	char *word;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = count_words(str);

	if (word_count == 0)
		return (NULL);

	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (i = 0; i < word_count; i++)
	{
		while (str[k] == ' ')
			k++;

		word_length = 0;
		while (str[k + word_length] != ' ' && str[k + word_length] != '\0')
			word_length++;
		word = malloc((word_length + 1) * sizeof(char));
		if (word == NULL)
		{
			for (j = 0; j < i; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}

		for (j = 0; j < word_length; j++)
			word[j] = str[k++];
		word[word_length] = '\0';
		words[i] = word;
	}
	words[word_count] = NULL;
	return (words);
}
