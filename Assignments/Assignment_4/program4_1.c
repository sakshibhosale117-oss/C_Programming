#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function name : CheckNumber
//  Input         : Integer
//  Output        : Nothing (void)
//  Description   : Checks whether the given number is positive, negative, or zero
//  Date          : 23/10/2026
//  Author        : Sakshi Tatyaso Bhosale
//
//////////////////////////////////////////////////////////

void CheckNumber(int iNo)
{
    if(iNo > 0)
    {
        printf("Number is positive");
    }
    else if(iNo < 0)
    {
        printf("Number is negative");
    }
    else
    {
        printf("Number is zero");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d",&iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}