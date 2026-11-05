#include<stdio.h>

//////////////////////////////////////////////////////////
//
//  Function name : FhtoCs
//  Input         : float
//  Output        : double
//  Description   : Accept temperature in Faherenhite and convert it into celsius.
//  Date          : 5/11/2026
//  Author        : Sakshi Tatyaso Bhosale
//
//////////////////////////////////////////////////////////

double FhtoCs(float fTemp)
{
    double dCel = 0.0;
    dCel = ((fTemp - 32) * (5.0 / 9.0));

    return dCel;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Temperature in Fahrenhite :");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in celsius : %lf",dRet);

    return 0;
}