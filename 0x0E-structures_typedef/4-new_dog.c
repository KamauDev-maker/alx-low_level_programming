#include "dog.h"
#include <stdlib.h>
/**
**new_dog - creates a new dog
*@name: name of the dog
*@age: age of the dog
*@owner: owner of the dog
*Return: a pointer to new dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
int i, len_of_name, len_of_owner;
struct dog *new_dog;
len_of_name = 0;
while (name[len_of_name] != '\0')
len_of_name++;
len_of_owner = 0;
while (owner[len_of_owner] != '\0')
len_of_owner++;
new_dog = malloc(sizeof(struct dog));
if (new_dog == NULL)
{
free(new_dog);
return (NULL);
}
new_dog->name = malloc(len_of_name + 1);
if (new_dog->name == NULL)
{
free(new_dog);
free(new_dog->name);
return (NULL);
}
new_dog->owner = malloc(len_of_owner + 1);
if (new_dog->owner == NULL)
{
free(new_dog);
free(new_dog->name);
free(new_dog->owner);
return (NULL);
}
for (i = 0; i <= len_of_name; i++)
new_dog->name[i] = name[i];
for (i = 0; i <= len_of_owner; i++)
new_dog->owner[i] = owner[i];
new_dog->age = age;
return (new_dog);
}
