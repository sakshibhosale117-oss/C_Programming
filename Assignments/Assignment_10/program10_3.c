#include<stdio.h>

//////////////////////////////////////////////////////////
//
//  Function name : KMtoMeter
//  Input         : Integer
//  Output        : Integer
//  Description   : Accept distance in KM and convert it into Meter.
//  Date          : 5/11/2026
//  Author        : Sakshi Tatyaso Bhosale
//
//////////////////////////////////////////////////////////

int KMtoMeter(int iNo)
{
    iNo = iNo * 1000;

    return iNo;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Distance :");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance from KM to Meter : %d",iRet);

    return 0;
}