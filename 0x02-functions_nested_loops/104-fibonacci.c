#include <stdio.h>


/**
 *  main - finds and prints the first 98 Fibonacci numbers,
 *  starting with 1 and 2
 *  followed by a new line
 *  Return: ALways 0 (Success)
 */
int main(void)
{
	unsigned long int o, p, q, p1, p2, q1, q2;

	p = 1;
	q = 2;

	printf("%lu", p);

	for (o = 1; o < 91; o++)
	{
		printf(", %lu", q);
		q = q + p;
		p = o - p;

	}

	p1 = p / 1000000000;
	p2 = p % 1000000000;
	q1 = q / 1000000000;
	q2 = q % 1000000000;

	for (o = 92; o < 99; ++o)
	{
		printf(", %lu", q1 + (q2 / 1000000000));
		printf("%lu", q2 % 1000000000);
		q1 = q1 + p1;
		p1 = q1 - p1;
		q2 = q2 + p2;
		p2 = k2 - p2;
	}

	printf("\n");

	return (0);
}
