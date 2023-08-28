/**
* infinite_add - Adds two numbers.
* @n1: First number.
* @n2: Second number.
* @r: Buffer to store the result.
* @size_r: Size of buffer r.
*
* Return: Result of sum. On error return 0.
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0;
	int carry = 0;
	int i, j, digit1, digit2, sum;

	while (n1[len1] != '\0')
		len1++;
	while (n2[len2] != '\0')
		len2++;
	if (len1 + 2 > size_r || len2 + 2 > size_r)
		return (0);
	r[size_r - 1] = '\0';
	i = len1 - 1;
	j = len2 - 1;
	while (i >= 0 || j >= 0 || carry != 0)
	{
		digit1 = i >= 0 ? n1[i] - '0' : 0;
		digit2 = j >= 0 ? n2[j] - '0' : 0;
		sum = digit1 + digit2 + carry;
		carry = sum / 10;
		sum %= 10;
		r[size_r - 2] = sum + '0';
		i--;
		j--;
		size_r--;
	}
	if (carry > 0)
		return (0);
	return (r + size_r - 1);
}
