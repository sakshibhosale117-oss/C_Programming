#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function name : CalculateElectricityBill 
//  Input         : Integers
//  Output        : Nothing (void)
//  Description   : Calculate Electricity Bill :- First 100 Units :5rs per unit, Next 100 Units :7rs per unit, Above 200 Units: 10rs per Unit
//  Date          : 25/10/2026
//  Author        : Sakshi Tatyaso Bhosale
//
//////////////////////////////////////////////////////////

void CalculateElectricityBill(int iUnits)
{
    float fBill = 0.0f;

    if(iUnits < 0)
    {
        printf("Invalid unit");
    }
    else if(iUnits <= 100)
    {
        fBill = iUnits * 5;
        printf("Bill = %f ",fBill);
    }
    else if(iUnits <= 200)
    {
        fBill = (100 * 5) + ((iUnits - 100)*7);
        printf("Bill = %f ",fBill);
    }
    else
    {
        fBill = (100 * 5) + (100 * 7) +((iUnits - 200)*10);
        printf("Bill = %f ",fBill);
    }
    
}

int main()
{
    int iUnits = 0;

    printf("Enter consumed unit : ");
    scanf("%d",&iUnits);

   CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}