#include <stdio.h>

/* Write a c program that draw a pyramid of
stars with height entered by the user */

/* using for loop */

/* OUTPUT:
Please Enter the height of the pyramid: 6
     *
    ***
   ***** 
  *******
 *********
***********
 */

void main(void)
{
    int userHeight, i, j;

    printf("Please Enter the height of the pyramid: ");
    scanf("%d", &userHeight);

    for (i = 0; i < userHeight; i++)
    {
        for (j = 0; j < userHeight - 1 - i; j++)
        {
            printf(" ");
        }
        for (j = 0; j < 2 * i + 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}