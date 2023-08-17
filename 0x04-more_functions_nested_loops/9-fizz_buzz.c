#include <stdio.h>

/**
 * fizz_buzz - function that numbers 1 to 100 with fizz or buzz
 * Return: numbers fizz buzz
 */
void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			if (i % 5 == 0)
				printf("FizzBuzz");
			else
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
		if (i != 100)
			printf(" ");
	}
	printf("\n");

}

/**
 * main - principal func
 * Return: 0
 */
int main(void)
{
	fizz_buzz();
	return (0);
}
