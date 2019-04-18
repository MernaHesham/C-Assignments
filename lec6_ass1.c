#include <stdio.h>

/* Write a C code that defines a function which takes an array as input argument and
apply the bubble sorting algorithm on it, then print the result */

void BubbleSort(int *ptr);

void main(void)
{
    int Arr[6] = {0};
    int i, j, temp;
    printf("Please Enter 6 numbers to sort \n");

    for (int i = 0; i < 6; i++)
    {
        printf("Please Enter number %d: ", i);
        scanf("%d", &Arr[i]);
    }

    BubbleSort(Arr);

    for (int i = 0; i < 6; i++)
    {
        printf("%d \t", Arr[i]);
    }
}

void BubbleSort(int *ptr)
{
    int i, j, temp;
    for (i = 6; i > 0; i--)
    {
        for (j = 0; j < i - 1; j++)
        {
            if (ptr[j] > ptr[j + 1])
            {
                temp = ptr[j];
                ptr[j] = ptr[j + 1];
                ptr[j + 1] = temp;
            }
        }
    }
}