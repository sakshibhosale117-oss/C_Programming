#include<stdio.h>

//////////////////////////////////////////////////////////
//
//  Function name : TableRev
//  Input         : Integers
//  Output        : Nothing (void)
//  Description   : Accept number from user and print Table for that number in reverse order.
//  Date          : 30/10/2026
//  Author        : Sakshi Tatyaso Bhosale
//
//////////////////////////////////////////////////////////

void TableRev(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;     //updater
    }

    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        printf("%d\t",iCnt * iNo);
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number : ");
    scanf("%d",&iValue);

    TableRev(iValue);

    return 0;
}