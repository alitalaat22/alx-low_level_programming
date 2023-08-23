#include <stdio.h>
/**
 * print_array - functn prints array
 * @a: my first input
 * @n: second input
 *
 * Description: function prints arr.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");
}
