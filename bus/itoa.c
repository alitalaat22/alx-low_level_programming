#include "shell.h"

/**
 * _numlen - length of number
 * @n: int
 * Return: length
 */
int _numlen(int n)
{
	int len = 0;

	while (n / 10 != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

/**
 * _itoa - take an int and convert to string
 * @num: integer to be printed
 * Return: string
 */

char *_itoa(int num)
{
	int digit = 0;
	int i = 0;
	char *str;
	int divisor = 1000000000;
	int len = _numlen(num);

	str = malloc(len * sizeof(char) + 1);
	if (!str)
		return (NULL);

	if (num < 10)
	{
		str[i++] = num + '0';
		str[i] = '\0';
		return (str);
	}

	while (divisor)
	{
		digit = (num / divisor) % 10;
		if (digit != 0 || (len >= 0  && str[i - 1] >= '0'))
		{
			str[i] = digit + '0';
			i++;
			len--;
		}
		divisor /= 10;
	}
	str[i] = '\0';
	return (str);
}