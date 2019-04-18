#include <stdio.h>

/* Write a C code that ask the user to enter his ID, if the ID is valid it will
ask the user to enter his password, if the password is correct the
program will print the user name, if the password is incorrect the
program will print Incorrect Password.
In case of not existing ID, the program will print Incorrect ID */

void main(void)
{
    int ID = 12345;
    int Pass = 56789;
    int userID, userPass;

    printf("Enter your ID: ");
    scanf("%d", &userID);

    if (userID == ID)
    {
        printf("Enter the Password: ");
        scanf("%d", &userPass);
        if (userPass == Pass)
        {
            printf("Username is Merna");
        }
        else
        {
            printf("Incorrect Password");
        }
    }
    else
    {
        printf("Invalid ID");
    }
}