#include "dog.h"
char *_strdup(char *str);

/**
 * new_dog - creates a new dog
 * @name: a pointer to name of dog
 * @age: dog's age
 * @owner: a pointer to owner of dog
 * Return: a pointer to dog_t struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *str_name;
	char *str_owner;
	dog_t *newdog;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);
	str_name = _strdup(name);
	if (str_name == NULL)
	{
		free(newdog);
		return (NULL);
	}
	str_owner = _strdup(owner);
	if (str_owner == NULL)
	{
		free(str_name);
		free(newdog);
		return (NULL);
	}
	newdog->name = str_name;
	newdog->age = age;
	newdog->owner = str_owner;
	return (newdog);
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: unsigned integer type
 * dest_str - duplicated string in char type
 * i - integer type
 * Return: a pointer to a new string
 */
char *_strdup(char *str)
{
	int i;
	char *dest_str;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	dest_str = malloc(sizeof(char) * (i + 1));
	if (dest_str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		dest_str[i] = str[i];
	}
	dest_str[i] = '\0';
	return (dest_str);
}
