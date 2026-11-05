#include<stdio.h>

//////////////////////////////////////////////////////////
//
//  Function name : RectArea
//  Input         : Float
//  Output        : Double
//  Description   : Accept width and height of rectangle and return its area.
//  Date          : 5/11/2026
//  Author        : Sakshi Tatyaso Bhosale
//
//////////////////////////////////////////////////////////

double RectArea(float fWidth , float fHeight)
{
    double dArea = 0.0;

    dArea = fWidth * fHeight;

    return dArea;
}

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    double dRet  = 0.0;

    printf("Enter Width :");
    scanf("%f",&fValue1);

    printf("Enter Height :");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1, fValue2);

    printf("Area of circle is : %lf",dRet);


    return 0;
}