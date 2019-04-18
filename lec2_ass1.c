#include <stdio.h>

/* Write a C code that ask the user to enter 10
numbers, then ask him to enter another number
to search on it in the 10 numbers and print its
location in case it is found.
In case the number is not found, it will print
number no exist */

/* OUTPUT:
Enter Number 1: 5
Enter Number 2: 6
Enter Number 3: 8
Enter Number 4: 9
Enter Number 5: 11
Enter Number 6: 14
Enter Number 7: 34
Enter Number 8: 58
Enter Number 9: 12
Enter Number 10: 6
Enter the value to search: 12
Value exists at elemnent number 9
 */

void main(void)
{
    /* variables */
    int x1, x2, x3, x4, x5, x6, x7, x8, x9, x10;
    int value, flag = 0;

    /* inputs */
    printf("Enter Number 1: ");
    scanf("%d", &x1);
    printf("Enter Number 2: ");
    scanf("%d", &x2);
    printf("Enter Number 3: ");
    scanf("%d", &x3);
    printf("Enter Number 4: ");
    scanf("%d", &x4);
    printf("Enter Number 5: ");
    scanf("%d", &x5);
    printf("Enter Number 6: ");
    scanf("%d", &x6);
    printf("Enter Number 7: ");
    scanf("%d", &x7);
    printf("Enter Number 8: ");
    scanf("%d", &x8);
    printf("Enter Number 9: ");
    scanf("%d", &x9);
    printf("Enter Number 10: ");
    scanf("%d", &x10);

    printf("Enter the value to search: ");
    scanf("%d", &value);

    if (value == x1)
    {
        printf("Value is exist at element number 1\n");
        flag = 1;
    }
    if (value == x2)
    {
        printf("Value is exist at element number 2\n");
        flag = 1;
    }
    if (value == x3)
    {
        printf("Value is exist at element number 3\n");
        flag = 1;
    }
    if (value == x4)
    {
        printf("Value is exist at element number 4\n");
        flag = 1;
    }
    if (value == x5)
    {
        printf("Value is exist at element number 5\n");
        flag = 1;
    }
    if (value == x6)
    {
        printf("Value is exist at element number 6\n");
        flag = 1;
    }
    if (value == x7)
    {
        printf("Value is exist at element number 7\n");
        flag = 1;
    }
    if (value == x8)
    {
        printf("Value is exist at element number 8\n");
        flag = 1;
    }
    if (value == x9)
    {
        printf("Value is exist at element number 9\n");
        flag = 1;
    }
    if (value == x10)
    {
        printf("Value is exist at element number 10\n");
        flag = 1;
    }

    if (flag == 0)
        printf("value is not exist");
}