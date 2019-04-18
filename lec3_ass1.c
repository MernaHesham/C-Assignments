#include <stdio.h>

/* While loops */

/* Write a C program that ask the user to
enter two numbers and print their
summation, this program should never
ends until the user close the window */

void main(void)
{
    /* initialize */
    int a1, a2;

    while (1)
    {
        printf("Please enter first number ");
        scanf("%d", &a1);

        printf("Please enter second number ");
        scanf("%d", &a2);

        printf("The result is %d\n\n", a1 + a2);
    }
}