#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: Print whether a randomly generated number is positive, negative, or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    printf("Le nombre %d ", n);
    
    if (n > 0)
    {
        printf("est positif\n");
    }
    else if (n == 0)
    {
        printf("est nul\n");
    }
    else
    {
        printf("est négatif\n");
    }

    return (0);
}

