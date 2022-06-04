#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/**
 *  main - program prints the last digit
 *  of a random number and declaresif the
 *  last digit is greater than 5,
 *  less than 6, or is 0.
 *
 *  Return: Always 0 (Program Successful)
 */

int main(void)

{

int n, LastDigit;

srand(time(0));
n = rand() - RAND_MAX / 2;
LastDigit = n % 10;

if (LastDigit > 5)

printf("Last digit of %d is %d and is greater than 5\n", n, LastDigit);


else if (LastDigit < 6 && LastDigit != 0)

printf("Last digit of %d is %d and is less than 6 and not 0\n", n, LastDigit);


else

printf("Last digit of %d is 0 and is 0\n", n);

return (0);

}
