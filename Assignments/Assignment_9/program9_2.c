#include<stdio.h>

//////////////////////////////////////////////////////////
//
//  Function name : DollerToINR
//  Input         : Integers
//  Output        : Integers
//  Description   : Accept amount in US dollers and return its corresponding value in Indian currency consider 1$ as 70rs
//  Date          : 30/10/2026
//  Author        : Sakshi Tatyaso Bhosale
//
//////////////////////////////////////////////////////////

int DollerToINR(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;     //updater
    }

    iNo = iNo * 70;

    return iNo;
   
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter number in USD: ");
    scanf("%d",&iValue);

    iRet = DollerToINR(iValue);

    printf("value in INR is : %d",iRet);

    return 0;
}