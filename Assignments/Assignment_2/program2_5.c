#include<stdio.h>

#define TRUE 1
#define FALSE 0

//////////////////////////////////////////////////////////
//
//  Function name : ChkEven
//  input         : Integer 
//  output        : Boolean (TRUE or FALSE)
//  Description   : Accept number from user and check whether number is even or odd
//  date          : 21/10/2026
//  Author        : Sakshi Tatyaso Bhosale
//
//////////////////////////////////////////////////////////

typedef int BOOL;
BOOL ChkEven(int iNo)
{
    if(iNo %2 == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number:");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

    if(bRet == TRUE)
    {
        printf("Number is even");
    }
    else
    {
        printf("Number is odd");
    }
    return 0;
}