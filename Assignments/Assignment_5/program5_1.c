#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function name : FindGreatest
//  Input         : Integers, Integers, Integers
//  Output        : Nothing (void)
//  Description   : Find greatest of three numbers 
//  Date          : 25/10/2026
//  Author        : Sakshi Tatyaso Bhosale
//
//////////////////////////////////////////////////////////

void FindGreatest(int iFirst, int iSecond, int iThird)
{
    if(iFirst > iSecond && iFirst > iThird)
    {
        printf("%d is greater",iFirst);
    }
    else if(iSecond > iFirst && iSecond > iThird)
    {
        printf("%d is greater",iSecond);
    }
    else if(iThird > iFirst && iThird > iSecond)
    {
        printf("%d is greater",iThird);
    }
    else
    {
       printf("All are equal");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;

    printf("Enter three numbers : ");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

    FindGreatest(iValue1, iValue2, iValue3);

    return EXIT_SUCCESS;
}