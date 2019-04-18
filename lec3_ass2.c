#include <stdio.h>

/* Write a login program in C that ask the
user to enter his ID and his password, if
the ID is correct the system will ask the
user to enter his password up to 3 times,
if he enters the password right the
systems welcomes him, if the three times
are incorrect, the system print No more
tries. If the user ID is incorrect the
system print You are not registered */

void main(void)
{

    int ID1 = 1234, ID2 = 5678, ID3 = 9870;
    int Pass1 = 7788, Pass2 = 5566, Pass3 = 1122;
    int userID, userPass, i, flag = 0, trial;

    printf("Please Enter your ID: ");
    scanf("%d", &userID);

    switch (userID)
    {
    case 1234:
        printf("Please Enter Password: ");
        for (i = 0; i < 3; i++)
        {
            scanf("%d", &userPass);
            if (userPass == Pass1)
            {
                printf("Welcome Ahmed");
                flag = 1;
                break;
            }

            else if (i < 2)
            {
                printf("Try again: ");
            }
        }
        break;

    case 5678:
        printf("Please Enter userPassword: ");
        for (i = 0; i < 3; i++)
        {
            scanf("%d", &userPass);
            if (userPass == Pass2)
            {
                printf("Welcome Amr");
                flag = 1;
                break;
            }

            else if (i < 2)
            {
                printf("Try again: ");
            }
        }
        break;

    case 9870:
        printf("Please Enter userPassword: ");
        for (i = 0; i < 3; i++)
        {
            scanf("%d", &userPass);
            if (userPass == Pass3)
            {
                printf("Welcome Wael");
                flag = 1;
                break;
            }

            else if (i < 2)
            {
                printf("Try again: ");
            }
        }
        break;

    default:
        printf("You are not registered");
        flag = 2;
    }

    if (flag == 0)
    {
        printf("Incorrect userPassword for 3 times, No more tries");
    }
}
