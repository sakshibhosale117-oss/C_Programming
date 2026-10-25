#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function name : CalculateDiscount
//  Input         : float
//  Output        : Nothing (void)
//  Description   : Accept the total purchase amount and calculate the final payable amount applying discount. 
//  Date          : 25/10/2026
//  Author        : Sakshi Tatyaso Bhosale
//
//////////////////////////////////////////////////////////

void CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if(fAmount < 1000)
    {
        fDiscount = fAmount * 0.0;

        fFinalAmount = fAmount - fDiscount;
        printf("Payable Amount :%f ",fFinalAmount);
    }
    else if(fAmount < 5000 && fAmount >= 1000)
    {
        fDiscount = fAmount * 0.10;

        fFinalAmount = fAmount - fDiscount;
        printf("Payable Amount : %f",fFinalAmount);
    }
    else if(fAmount > 5000)
    {
        fDiscount = fAmount * 0.20;
        fFinalAmount = fAmount - fDiscount;
        printf("Payable Amount :%f ",fFinalAmount);
    }
    else
    {
        printf("Invalid purchase amount");
    }

    

}

int main()
{
    float fAmount = 0.0f;

    printf("Enter purchase amount: ");
    scanf("%f",&fAmount);

    
    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}