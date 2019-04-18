#include <stdio.h>

/* store in array and get max/ min */

/* Write a C code that ask the user to enter 10 values and save them in an array
using a for loop. Then print the minimum and the maximum of the values. */

int max(int arr[10]);

void main(void)
{
    int arr[10] = {0};
    int i, max, min;
    printf("Please Enter 10 values:");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = arr[0];
    min = arr[0];
    for (i = 0; i < 10; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }

        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("the max is: %d \n", max);
    printf("the min is: %d \n", min);
}
