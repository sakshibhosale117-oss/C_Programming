#include<stdio.h>

//////////////////////////////////////////////////////////
//
//  Function name : Display 
//  Input         : Integers
//  Output        : Nothing (void)
//  Description   : Accept number from user and print first 5 multiples of that number
//  Date          : 30/10/2026
//  Author        : Sakshi Tatyaso Bhosale
//
//////////////////////////////////////////////////////////

void MultipleDisplay(int iNo)
{
    int i = 0;

    if(iNo < 0)
    {
        iNo = -iNo;     //updater
    }

    for(i = 1; i <= 5; i++)
    {
        printf("%d\t",iNo * i);;
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number : ");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}