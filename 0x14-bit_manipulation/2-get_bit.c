#include "main.h"
#include <stdio.h>
#include<stdlib.h>
#include <unistd.h>

/**
 * _pow - calculates (base ^ power)
 * @base: base of the number
 * @power: power of the number
 *
 * Return: value of (base ^ power)
 */

unsigned long int _pow(unsigned int base, unsigned int power)

{
	unsigned long int num1;
	unsigned int j;

	num1 = 1;
	for (j = 1; j <= power; j++)
		num1 *= base;
	return (num1);
}

/**
 * print_binary - prints a nos in base2
 * @n: nos to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)

{
	unsigned long int divisor, check;
	char flag;

	flag = 0;
	divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
		check = n & divisor;
		if (check == divisor)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}
