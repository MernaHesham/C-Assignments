#include <stdio.h>

/* Write C code that manage a small school. The school has 3 classes each class
contains 10 students. Define three arrays for the three classes each one with a
length of 10. Save a random numbers in all array elements to indicate the
students grade. The program will calculate and display the following statistics:
1- Number of passed students
2- Number of Failed students
3- Highest grade
4- Lowest grade
5- Average grade
Knowing that the total grade is from 100 and the minimum passing grade is 50 */

void main(void)
{
    int class1[10] = {32, 72, 63, 42, 21, 12, 91, 2, 3, 23};
    int class2[10] = {43, 6, 34, 42, 3, 1, 72, 12, 5, 23};
    int class3[10] = {67, 67, 23, 54, 21, 34, 56, 76, 87, 78};

    int Class1Passed = 0, Class1Failed = 0, Class1Highest = class1[0], Class1Lowest = class1[0];
    int Class2Passed = 0, Class2Failed = 0, Class2Highest = class2[0], Class2Lowest = class2[0];
    int Class3Passed = 0, Class3Failed = 0, Class3Highest = class3[0], Class3Lowest = class3[0];

    int TotalPassed = 0, TotalFailed = 0, TotalHighest = 0, TotalLowest = 0, TotalSum = 0, TotalAvg = 0;
    int i;

    for (i = 0; i < 10; i++)
    {
        // getting the number of passed students in class 1
        if (class1[i] >= 50)
        {
            Class1Passed++;
        }
        else
        {
            Class1Failed++;
        }

        //getting the highest grade in class 1
        if (class1[i] > Class1Highest)
        {
            Class1Highest = class1[i];
            TotalSum += class1[i];
        }
        else if (class1[i] < Class1Lowest)
        {
            Class1Lowest = class1[i];
            TotalSum += class1[i];
        }
        else
        {
            TotalSum += class1[i];
        }
    }

    for (i = 0; i < 10; i++)
    {
        if (class2[i] >= 50)
        {
            Class2Passed++;
        }
        else
        {
            Class2Failed++;
        }
        if (class2[i] > Class2Highest)
        {
            Class2Highest = class2[i];
            TotalSum += class2[i];
        }
        else if (class2[i] < Class2Lowest)
        {
            Class2Lowest = class2[i];
            TotalSum += class2[i];
        }
        else
        {
            TotalSum += class2[i];
        }
    }

    for (i = 0; i < 10; i++)
    {
        if (class3[i] >= 50)
        {
            Class3Passed++;
        }
        else
        {
            Class3Failed++;
        }
        if (class3[i] > Class3Highest)
        {
            Class3Highest = class3[i];
            TotalSum += class3[i];
        }
        else if (class3[i] < Class3Lowest)
        {
            Class3Lowest = class3[i];
            TotalSum += class3[i];
        }
        else
        {
            TotalSum += class3[i];
        }
    }

    TotalPassed = Class1Passed + Class2Passed + Class3Passed;
    TotalFailed = Class1Failed + Class2Failed + Class3Failed;

    //getting the highest gradein all classes
    if (Class1Highest >= Class2Highest && Class1Highest >= Class3Highest)
    {
        TotalHighest = Class1Highest;
    }
    else if (Class2Highest >= Class3Highest)
    {
        TotalHighest = Class2Highest;
    }
    else
    {
        TotalHighest = Class3Highest;
    }

    if (Class1Lowest <= Class2Lowest && Class1Lowest <= Class3Lowest)
    {
        TotalLowest = Class1Lowest;
    }
    else if (Class2Lowest <= Class3Lowest)
    {
        TotalLowest = Class2Lowest;
    }
    else
    {
        TotalLowest = Class3Lowest;
    }

    TotalAvg = TotalSum / 30;

    printf("the number of passed students in class 1: %d \n", Class1Passed);
    printf("the number of failed students in class 1: %d \n", Class1Failed);
    printf("the number of passed students in class 2: %d \n", Class2Passed);
    printf("the number of failed students in class 2: %d \n", Class2Failed);
    printf("the number of passed students in class 3: %d \n", Class3Passed);
    printf("the number of failed students in class 3: %d \n", Class3Failed);
    printf("the number of total passed students: %d \n", TotalPassed);
    printf("the number of total failed students: %d \n", TotalFailed);

    printf("the highest grade in class 1: %d \n", Class1Highest);
    printf("the lowest grade in class 1: %d \n", Class1Lowest);
    printf("the highest in class 2: %d \n", Class2Highest);
    printf("the lowest in class 2: %d \n", Class2Lowest);
    printf("the highest in class 3: %d \n", Class3Highest);
    printf("the lowest in class 3: %d \n", Class3Lowest);
    printf("the highest grade in all classes: %d \n", TotalHighest);
    printf("the lowest grade in all classes: %d \n", TotalLowest);

    printf("the Total sum in all classes: %d \n", TotalSum);
    printf("the Total average in all classes: %d \n", TotalAvg);
}
