#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (success)
 */

int main(void)
{
	int i;

	i = 1;

	while (i <= 100)
	{

		if ((i % 5 == 0) && (i % 3 == 0))
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		printf(" ");
		i++;
	}
	printf("\n");
	return (0);
}
