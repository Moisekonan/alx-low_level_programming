#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: Print the last digit of a randomly generated number along with a message.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n, last_digit;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    last_digit = n % 10;

    printf("Dernier chiffre de %d est ", n);

    if (last_digit > 5)
    {
        printf("et est supérieur à 5\n");
    }
    else if (last_digit == 0)
    {
        printf("et est 0\n");
    }
    else
    {
        printf("et est inférieur à 6 et différent de 0\n");
    }

    return (0);
}

