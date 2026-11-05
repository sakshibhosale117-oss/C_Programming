#include<stdio.h>

//////////////////////////////////////////////////////////
//
//  Function name : Display 
//  Input         : Integers
//  Output        : Nothing (void)
//  Description   : Accept number from user and print it's number line Enter number : 4  -4      -3      -2      -1      0       1       2       3       4
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

    for(i = -iNo; i <= iNo; i++)
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