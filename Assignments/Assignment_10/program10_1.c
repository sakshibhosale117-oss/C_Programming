#include<stdio.h>

//////////////////////////////////////////////////////////
//
//  Function name : CircleArea
//  Input         : Float
//  Output        : Double
//  Description   : Accept radius of circle and return its area.
//  Date          : 5/11/2026
//  Author        : Sakshi Tatyaso Bhosale
//
//////////////////////////////////////////////////////////

double CircleArea(float fRadius)
{
    float const PI = 3.14;
    double dArea = 0.0;

    dArea = PI * fRadius * fRadius;

    return dArea;
}

int main()
{
    float fValue = 0.0f;
    double dRet  = 0.0;

    printf("Enter radius :");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is : %lf",dRet);


    return 0;
}