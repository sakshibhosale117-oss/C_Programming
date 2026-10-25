#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function name : CheckTriangle
//  Input         : Three Integers
//  Output        : Nothing (void)
//  Description   : Check Triangle is valid or not 
//  Date          : 25/10/2026
//  Author        : Sakshi Tatyaso Bhosale
//
//////////////////////////////////////////////////////////

void CalculateBonus(float fSalary, int iYears)
{
    float fBonus = 0.0f;

    if(iYears > 10)
    {
        fBonus = fSalary * 0.15;
        printf("Bonus : %f",fBonus);
    }
    else if(iYears <= 10 && iYears >= 5)
    {
        fBonus = fSalary * 0.10;
        printf("Bonus : %f",fBonus);
    }
    else if(iYears < 5)
    {
        fBonus = fSalary * 0.5;
        printf("Bonus : %f",fBonus);
    }
    else
    {
        printf("Invalid input");
    }

}

int main()
{
    float fSalary = 0.0f;
    int iYears = 0;

    printf("Enter salary and year of service: ");
    scanf("%f %d",&fSalary,&iYears);

    CalculateBonus(fSalary , iYears);

    return EXIT_SUCCESS;
}