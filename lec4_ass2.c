#include <stdio.h>

/* Write a C program to act as simple calculator, first it will ask the user to enter the
operation ID, depending on the operation, the program will ask the user either to
enter 1 operand or 2 operands and the program will execute the operation and print
the result. Each operation should be implemented in a stand a long function */

int add(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);
int and (int, int);
int or (int, int);
int not(int);
int xor (int, int);
int reminder(int, int);
int inc(int);
int dec(int);

void main(void)
{
    int ID, op1, op2, result;

    printf("Please Enter the operation ID:");
    scanf("%d", &ID);

    switch (ID)
    {
    case 1:
    {
        printf("Please Enter two numbers: ");
        scanf("%d %d", &op1, &op2);
        result = add(op1, op2);
        break;
    }

    case 2:
    {
        printf("Please Enter two numbers: ");
        scanf("%d %d", &op1, &op2);
        result = sub(op1, op2);
        break;
    }

    case 3:
    {
        printf("Please Enter two numbers: ");
        scanf("%d %d", &op1, &op2);
        result = mul(op1, op2);
        break;
    }

    case 4:
    {
        printf("Please Enter two numbers: ");
        scanf("%d %d", &op1, &op2);
        result = div(op1, op2);
        break;
    }

    case 5:
    {
        printf("Please Enter two numbers: ");
        scanf("%d %d", &op1, &op2);
        result = and(op1, op2);
        break;
    }

    case 6:
    {
        printf("Please Enter two numbers: ");
        scanf("%d %d", &op1, &op2);
        result = or (op1, op2);
        break;
    }

    case 7:
    {
        printf("Please Enter one number: ");
        scanf("%d", &op1);
        result = not(op1);
        break;
    }

    case 8:
    {
        printf("Please Enter two numbers: ");
        scanf("%d %d", &op1, &op2);
        result = xor(op1, op2);
        break;
    }

    case 9:
    {
        printf("Please Enter two numbers: ");
        scanf("%d %d", &op1, &op2);
        result = reminder(op1, op2);
        break;
    }

    case 10:
    {
        printf("Please Enter one number: ");
        scanf("%d", &op1);
        result = inc(op1);
        break;
    }

    case 11:
    {
        printf("Please Enter one number: ");
        scanf("%d", &op1);
        result = dec(op1);
        break;
    }
    }
    printf("the result is: %d", result);
}

int add(int a, int b)
{
    int res = a + b;
    return res;
}
int sub(int a, int b)
{
    int res = a - b;
    return res;
}
int mul(int a, int b)
{
    int res = a * b;
    return res;
}
int div(int a, int b)
{
    int res = a / b;
    return res;
}
int and (int a, int b)
{
    int res = a & b;
    return res;
}
int or (int a, int b)
{
    int res = a | b;
    return res;
}
int not(int a)
{
    int res = !a;
    return res;
}
int xor (int a, int b) {
    int res = a ^ b;
    return res;
} int reminder(int a, int b)
{
    int res = a % b;
    return res;
}
int inc(int a)
{
    int res = a++;
    return res;
}
int dec(int a)
{
    int res = a--;
    return res;
}