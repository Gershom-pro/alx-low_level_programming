#include "main.h"


/**
 * infinite_add - adds two numbers.
 * @n1: first input number
 * @n2: second input number
 * @r: input buffer to return
 * @size_r: size of buffer
 *
 * Return: pointer to buffer or 0 if size of result is
 * greater than buffer size
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int num1, num2, sum, n, digits, i;

	num1 = a_to_int(n1);
	num2 = a_to_int(n2);
	sum = num1 + num2;
	n = sum;
	digits = 1;
	i = 0;

	while ((n / 10) != 0)
	{
		digits++;
		n /= 10;
	}

	if ((digits + 1) > size_r)
	{
		return (0);
	}
	else
	{
		r[digits] = '\0';
		for (i = (digits - 1); i >= 0; i--)
		{
			r[i] = (sum % 10) + '0';
			sum /= 10;
		}
	}

	return (r);
}
