#include <stdio.h>

/* Write a C program the implement 2 function:
1- Function to get the maximum of 4 values
2- Function to get the minimum of 4 values
The program will ask the user first to enter the 4 values, then print the maximum
number and minimum number of them. */

int max(int, int, int, int);
int min(int, int, int, int);

void main(void)
{
    int num1, num2, num3, num4;
    int maxNum = 0, minNum = 0;

    printf("Please enter 4 numbers to get the max and min:");
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    maxNum = max(num1, num2, num3, num4);
    minNum = min(num1, num2, num3, num4);

    if (maxNum == -1)
    {
        printf("Error. try again");
    }
    else if (minNum == -1)
    {
        printf("Error. try again");
    }
    else
    {
        printf("the maximum number is: %d \n", maxNum);
        printf("the minimum number is: %d", minNum);
    }
}

int max(int a, int b, int c, int d)
{

    int max;

    if (a >= b && a >= c && a >= d)
    {
        max = a;
    }
    else if (b >= a && b >= c && b >= d)
    {
        max = b;
    }
    else if (c >= a && c >= b && c >= d)
    {
        max = c;
    }
    else if (d >= a && d >= b && d >= c)
    {
        max = d;
    }
    else
    {
        max = -1;
    }

    return max;
}

int min(int a, int b, int c, int d)
{

    int min;

    if (a <= b && a <= c && a <= d)
    {
        min = a;
    }
    else if (b <= a && b <= c && b <= d)
    {
        min = b;
    }
    else if (c <= a && c <= b && c <= d)
    {
        min = c;
    }
    else if (d <= a && d <= b && d <= c)
    {
        min = d;
    }
    else
    {
        min = -1;
    }

    return min;
}