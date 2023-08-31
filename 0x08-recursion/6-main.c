#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - Check if a number is prime.
 * @n: The number to be checked.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
    int i; /* Declare loop variable here */

    if (n <= 1) {
        return 0; /* 0 and 1 are not prime */
    }

    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; /* n has a divisor other than 1 and itself */
        }
    }

    return 1; /* n is prime */
}

int main(void)
{
    int r;

    r = is_prime_number(1);
    printf("%d\n", r);
    r = is_prime_number(1024);
    printf("%d\n", r);
    r = is_prime_number(16);
    printf("%d\n", r);
    r = is_prime_number(17);
    printf("%d\n", r);
    r = is_prime_number(25);
    printf("%d\n", r);
    r = is_prime_number(-1);
    printf("%d\n", r);
    r = is_prime_number(113);
    printf("%d\n", r);
    r = is_prime_number(7919);
    printf("%d\n", r);
    return 0;
}
