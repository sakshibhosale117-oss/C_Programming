#include<stdio.h>

//////////////////////////////////////////////////////////
//
//  Function name : SquareMeter
//  Input         : Integer
//  Output        : Double
//  Description   : Accept area in square feet and convert it into square meter.
//  Date          : 5/11/2026
//  Author        : Sakshi Tatyaso Bhosale
//
//////////////////////////////////////////////////////////

double SquareMeter(int iValue)
{
    double dSquareMeter = 0.0;
    dSquareMeter = 0.0929 * iValue;

    return dSquareMeter;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet :");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square meter: %lf",dRet);

    return 0;
}