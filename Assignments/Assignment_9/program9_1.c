#include<stdio.h>

//////////////////////////////////////////////////////////
//
//  Function name : Display
//  Input         : Integers
//  Output        : Nothing (void)
//  Description   : Accept number from user and print pattern as:- I/P: 5 O/P: * * * * * # # # # #
//  Date          : 30/10/2026
//  Author        : Sakshi Tatyaso Bhosale
//
//////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;     //updater
    }

   for(iCnt = 1; iCnt <= iNo; iCnt++)
   {
    printf("#\t");
    
   }
   for(iCnt = 1; iCnt <= iNo; iCnt++)
   {
    printf("*\t");
    
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