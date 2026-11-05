#include<stdio.h>

//////////////////////////////////////////////////////////
//
//  Function name : Table 
//  Input         : Integers
//  Output        : Nothing (void)
//  Description   : Accept number from user and print Table for that number.
//  Date          : 30/10/2026
//  Author        : Sakshi Tatyaso Bhosale
//
//////////////////////////////////////////////////////////

void Table(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;     //updater
    }

    for(iCnt = 1;iCnt <= 10; iCnt++)
    {
        printf("%d\t",iCnt * iNo);
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number : ");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}