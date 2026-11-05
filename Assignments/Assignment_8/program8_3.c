#include<stdio.h>

//////////////////////////////////////////////////////////
//
//  Function name : Factorial 
//  Input         : Integers
//  Output        : Integer
//  Description   : Accept number from user and print that number Factorial.
//  Date          : 30/10/2026
//  Author        : Sakshi Tatyaso Bhosale
//
//////////////////////////////////////////////////////////

int Factorial(int iNo)
{
    int iCnt = 0, iFact = 0;

    if(iNo < 0)
    {
        iNo = -iNo;     //updater
    }

    iFact = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    
    return iFact;

    
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is %d ",iRet);

    return 0;
}