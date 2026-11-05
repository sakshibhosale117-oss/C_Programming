#include<stdio.h>

//////////////////////////////////////////////////////////
//
//  Function name : FactorialDiff
//  Input         : Integers
//  Output        : Integers
//  Description   : Program to find even and odd factorial difference of given number
//  Date          : 5/11/2026
//  Author        : Sakshi Tatyaso Bhosale
//
//////////////////////////////////////////////////////////

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iFact1 = 1; //even
    int iFact2 = 1; //odd

    if(iNo < 0)
    {
        iNo = -iNo;     //updater
    }

    //even factorial
     for(iCnt = 2; iCnt <= iNo; iCnt = iCnt + 2)
    {
        iFact1 = iFact1 * iCnt;
    
    }

    //odd factorial
    for(iCnt = 1; iCnt <= iNo; iCnt = iCnt + 2)
    {
        iFact2 = iFact2 * iCnt;
    
    }
   
    //difference (even-odd)
    return (iFact1 - iFact2);
   
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("%d",iRet);

    return 0;
}


