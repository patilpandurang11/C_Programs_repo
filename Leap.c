#include<stdio.h>
#include<stdbool.h>
bool checkyear(int year)
{
    //If a year is multiple of 400,
    //then it is a leap year.
    if(year % 400 == 0)
    return true;
    
    //Else If a year is multiple of 100,
    //then it is not a leap year.
    if(year % 100 == 0)
    return false;

    //Else if a year is multiple of 4,
    //then it is a leap year.
    if(year % 4 == 0)
    return true;

    return false;
}

// Main function
int main()
{
    int year;
    printf("Enter a year : ");
    scanf("%d", &year);
    checkyear(year)?printf("Leap Year"):
                    printf("Not a Leap Year");
    return 0;
}

