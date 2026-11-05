#include<stdio.h>

//////////////////////////////////////////////////////////
//
//  Function name : Display 
//  Input         : Integers
//  Output        : Nothing (void)
//  Description   : Accept number from user and print numbers till that number
//  Date          : 30/10/2026
//  Author        : Sakshi Tatyaso Bhosale
//
//////////////////////////////////////////////////////////

void Display(int iNo)
{
    int i = 0;

    if(iNo < 0)
    {
        iNo = -iNo;     //updater
    }

    for(i = 1; i <= iNo; i++)
    {
        printf("%d\t",i);;
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}