#include <stdio.h>

/**
 * main - Finds and prints the largest prime
 *        factor of the number 612852475143.
 *
 * Return: 0 all the time
 */

int main(void)
{
	long num = 612852475143, divisor;

	while (divisor < (num / 2))
	{
		if ((num % 2) == 0)
		{
			num /= 2;
			continue;
		}

		for (divisor = 3; divisor < (num / 2); divisor += 2)
		{
			if ((num % divisor) == 0)
				num /= divisor;
		}
	}

	printf("%ld\n", num);

	return (0);
}
