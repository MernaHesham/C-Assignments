#include <stdio.h>

/* Write a code that scan 3 numbers from the user and print them in reversed order */

/* OUTPUT:
Please enter number 1: 11
Please enter number 2: 12
Please enter number 3: 13
number 3: 13
number 2: 12
number 1: 11
*/

void main()
{
    /* initiate variables */
    int a1, a2, a3;

    /* getting inputs from user using scanf */
    printf("Please enter number 1: ");
    scanf("%d", &a1);

    printf("Please enter number 2: ");
    scanf("%d", &a2);

    printf("Please enter number 3: ");
    scanf("%d", &a3);

    /* displaying the outputs */
    printf("number 3: %d\n", a3);
    printf("number 2: %d\n", a2);
    printf("number 1: %d\n", a1);
}