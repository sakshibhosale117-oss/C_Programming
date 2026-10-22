#include<stdio.h>

//////////////////////////////////////////////////////////
//
//  Function name : Display
//  input         : Integer
//  output        : Nothing (void)
//  Description   : Prints the given number of * on screen
//  date          : 21/10/2026
//  Author        : Sakshi Tatyaso Bhosale
//
//////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;
    // updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iCnt < iNo)
    {
        printf(" * ");
        iCnt++;
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