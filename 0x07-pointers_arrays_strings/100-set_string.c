#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to be copied
 * @to: character to set on
 */
void set_string(char **s, char *to)
{
	*s = to;
}
