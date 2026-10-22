#include<stdio.h>

//////////////////////////////////////////////////////////
//
//  Function name : Accept
//  input         : Integer
//  output        : Nothing (void)
//  Description   : Prints the given number of * on screen
//  date          : 21/10/2026
//  Author        : Sakshi Tatyaso Bhosale
//
//////////////////////////////////////////////////////////

void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("* ");
    }
}
int main()
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);
    
    return 0;
}
