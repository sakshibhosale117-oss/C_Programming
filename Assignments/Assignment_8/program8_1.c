#include<stdio.h>

//////////////////////////////////////////////////////////
//
//  Function name : Number 
//  Input         : Integers
//  Output        : Nothing (void)
//  Description   : Accept number from user and print that number  less than 50 print small & greater than 50 and les than 100 then medium & greater than 100 then print large.
//  Date          : 30/10/2026
//  Author        : Sakshi Tatyaso Bhosale
//
//////////////////////////////////////////////////////////

void Number(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;     //updater
    }

    if(iNo <= 50)
    {
        printf("Small");
    }
    else if(iNo > 50 & iNo <= 100)
    {
        printf("Medium");
    }
    else 
    {
        printf("Large");
    }

    
}
int main()
{
    int iValue = 0;
    printf("Enter number : ");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}