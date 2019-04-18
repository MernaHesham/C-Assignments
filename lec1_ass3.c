#include <stdio.h>

/* Arithmatic and Bitwise operators */
/* Write a code that takes 2 numbers and print their summation, subtraction, anding, oring, and Xoring */

/* OUTPUT:
Please Enter number a: 4
Please Enter number b: 2
a + b = 6
a - b = 2
a & b = 0
a | b = 6
a ^ b = 6
 */

void main()
{
    int a, b;

    /* inputs */
    printf("Please Enter number a: ");
    scanf("%d", &a);

    printf("Pleae Enter number b:  ");
    scanf("%d", &b);

    /* output */
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a & b = %d\n", a & b);
    printf("a | b = %d\n", a | b);
    printf("a ^ b = %d\n", a ^ b);
}