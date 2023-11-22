#include "main.h"

/**
 * strtow - splits a string into words separated by space
 * @str: the string to be spit
 *
 * Return: a pointer to an array of strings
 * or NULl if str == NULL or ""
 */

char **strtow(char *str)
{
	char **arr;
	int i = 0, word_num, k, j, strlen = 0, start = 0, len = 0;

	while (str[len])
		len++;
	if (str == NULL || len == 0)
		return (NULL);

	word_num = word_count(str);
	arr = malloc(sizeof(char *) * word_num);
	if (arr == NULL)
		return (NULL);

	while (i < word_num)
	{
		for (k = 0; str[k]; k++)
		{
			if (i == 0 && str[k] != ' ')
				start = k;
			start = k;
			for (j = start; str[j]; j++)
			{
				if (str[j] != ' ')
				{
					k++;
					strlen++;
				}
				else
					break;
			}
			if (strlen != 0)
			{
				arr[i] = malloc(sizeof(char) * strlen + 1);
				if (arr[i] == NULL)
					return (NULL);
				i++;
			}
			strlen = 0;
		}
	}
	arr = create_words(arr, str, word_num);

	return (arr);
}

/**
 * word_count - countsthe amount of words separated by spaces
 * @str: teh string we are working with
 *
 * Return: the amount of words separated by spaces
 */

int word_count(char *str)
{
	int i = 0, j = 0, k = 0, not = 0;
	char src[] = {' ', '\n', '\t'};

	while (str[j])
	{
		i++;
		if (str[j] == ' ')
		{
			for (k = 0; src[k]; k++)
			{
				if (src[k] == str[j + 1])
					not++;
			}
			if (not == 0)
				i++;
		}
		j++;
	}

	return (i);
}

/**
 * create_words - inserts words separated by spaces into an array
 * @array: the array to be inserted these words
 * @str: the string with the words separated by spaces
 *
 * Return: the array with the inserted words
 */

char **create_words(char **array, char *s1, int size)
{
	char *temp;
	int i, k = 0, j, start = 0, a = 0;;

	for (i = 0; i < size; i++)
	{
		temp = array[i];
		for (j = start; s1[j]; j++)
		{
			while (s1[a] != ' ' || s1[a] != '\0')
			{
				temp[k] = s1[a];
				a++;
				k++;
				j++;
			}
			temp[k] = '\0';
			break;
		}
		start = k + 1;
	}
	array[size] = NULL;

	return (array);
}
