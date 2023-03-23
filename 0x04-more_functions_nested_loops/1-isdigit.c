/**
 * _isdigit - program startup
 * @c: int being evaluated
 * Return: return (0)s program successfully, return (1) throws an error
 */
#include "main.h"
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
