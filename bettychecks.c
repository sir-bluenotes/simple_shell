#include <stdio.h>

/**
* main - adds two ints
*Return: 0
*/

int main(void)
{
	int a, b, sum = 0;

	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);

	sum = a + b;
	printf("The sum is: %d\n", sum);

	return (0);
}
