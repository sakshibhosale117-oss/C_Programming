#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function name : CheckEvenOdd
//  Input         : Integer
//  Output        : Nothing (void)
//  Description   : Checks whether the given number is even or odd
//  Date          : 24/10/2026
//  Author        : Sakshi Tatyaso Bhosale
//
//////////////////////////////////////////////////////////

void CheckEvenOdd(int iNo)
{
    if((iNo % 2) == 0)
    {
        printf("Number is even");
    }
    else 
    {
        printf("Number is odd");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}