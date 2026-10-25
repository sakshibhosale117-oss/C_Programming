#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function name : CheckLeapYear
//  Input         : Integers
//  Output        : Nothing (void)
//  Description   : Check Leap Year 
//  Date          : 25/10/2026
//  Author        : Sakshi Tatyaso Bhosale
//
//////////////////////////////////////////////////////////

void CheckLeapYear(int iYear)
{
    if(((iYear % 400) == 0) || ((iYear % 4) == 0) && ((iYear % 100) != 0))
    {
        printf("%d is leap year",iYear);
    }
    else
    {
        printf("%d is not leap year",iYear);
    }
}
   


int main()
{
    int iYear = 0;

    printf("Enter year: ");
    scanf("%d",&iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}