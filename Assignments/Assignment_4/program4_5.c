#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function name : CheckDivisibility
//  Input         : Integer
//  Output        : Nothing (void)
//  Description   : Checks whether the given number is divisible by 5
//  Date          : 24/10/2026
//  Author        : Sakshi Tatyaso Bhosale
//
//////////////////////////////////////////////////////////

void CheckDivisibility(int iValue)
{
    if((iValue % 5) == 0)
    {
        printf("Divisible by 5");
    }
    else
    {
        printf("Not Divisible by 5");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d",&iValue);

    CheckDivisibility(iValue);

    return EXIT_SUCCESS;
}