#include "main.h"
/**
* print_last_digit - prints the last digit of a number
* @n: the digit whose last digit will be printed
* Return: returns the value of the last digit
*/

int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;
	_putchar('0' + (n % 10));
	return (n % 10);
	return (0);
}
