#include<stdio.h>

//////////////////////////////////////////////////////////
//
//  Function name : OddDisplay 
//  Input         : Integers
//  Output        : Nothing (void)
//  Description   : Accept number from user and print all odd numbers up to number
//  Date          : 30/10/2026
//  Author        : Sakshi Tatyaso Bhosale
//
//////////////////////////////////////////////////////////

void OddDisplay(int iNo)
{
    int i = 0;

    if(iNo < 0)
    {
        iNo = -iNo;     //updater
    }

    for(i = 1; i <= iNo; i += 2)
    {
        printf("%d\t",i);;
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number : ");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}