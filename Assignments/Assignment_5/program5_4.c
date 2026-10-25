#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function name : CheckMultipleDivisibility
//  Input         : Integers
//  Output        : Nothing (void)
//  Description   : Check Divisibility by 3 and 5
//  Date          : 25/10/2026
//  Author        : Sakshi Tatyaso Bhosale
//
//////////////////////////////////////////////////////////

void CheckMultipleDivisibility(int iValue)
{
    if(((iValue % 3) == 0) && ((iValue % 5) == 0))
    {
        printf("%d is Divisible by 5 and 3",iValue);
    }
    else if((iValue % 3) == 0) 
    {
        printf("%d is Divisible by 3 only",iValue);
    }
    else if((iValue % 5) == 0) 
    {
        printf("%d is Divisible by 5 only",iValue);
    }
    else
    {
        printf("%d is not Divisible by 5 and 3",iValue);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number: ");
    scanf("%d",&iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}