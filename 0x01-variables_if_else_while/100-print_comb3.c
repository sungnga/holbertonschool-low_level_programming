#include <stdio.h>

/**
 * main - prints all possibe different combinations of two digits
 * d1 - integer type for first digit
 * d2 - integer type for second digit
 * Return: a zero value
 */
int main(void)
{
        int d1;
        int d2;

        for (d1 = 0; d1 <= 8; d1++)
        {
                for(d2 = d1 + 1; d2 <= 9; d2++)
                {
                        putchar(d1 + '0');
                        putchar(d2 + '0');
                        if (d1 != 8){
				putchar(',');
				putchar(' ');
                        }
                }
        }
	putchar('\n');
        return (0);
}
