#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function name : FindGreater
//  Input         : Two Integers
//  Output        : Nothing (void)
//  Description   : Compares two numbers and displays the greater number or checks whether both are equal
//  Date          : 24/10/2026
//  Author        : Sakshi Tatyaso Bhosale
//
//////////////////////////////////////////////////////////

void FindGreater(int iFirst, int iSecond)
{
    if(iFirst > iSecond)
    {
        printf("%d is greater",iFirst);
    }
    else if(iFirst < iSecond)
    {
        printf("%d is greater",iSecond);
    }
    else
    {
        printf("Both are Equal");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter First number: ");
    scanf("%d",&iValue1);

    printf("Enter Second number: ");
    scanf("%d",&iValue2);

    FindGreater(iValue1, iValue2);

    return EXIT_SUCCESS;
}