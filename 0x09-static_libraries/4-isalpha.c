#include"main.h"

/**
*_isalpha - check for the alphabet race
*@c: the checked
*Return: 0 otherwise , 1 for the race
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
