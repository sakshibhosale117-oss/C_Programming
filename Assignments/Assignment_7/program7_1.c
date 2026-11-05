#include<stdio.h>

//////////////////////////////////////////////////////////
//
//  Function name : Pattern 
//  Input         : Integers
//  Output        : Nothing (void)
//  Description   : Accept number from user and print that number of $ & * 
//  Date          : 30/10/2026
//  Author        : Sakshi Tatyaso Bhosale
//
//////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int i = 0;

    if(iNo < 0)
    {
        iNo = -iNo;     //updater
    }

    for(i = 1; i <= iNo; i++)
    {
        printf("$\t*\t");
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number : ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}