 #include<stdio.h>

//////////////////////////////////////////////////////////
//
//  Function name : Display
//  input         : Integer , Integer
//  output        : Integer
//  Description   : Accept two numbers from user and display first number in second number of times
//  date          : 21/10/2026
//  Author        : Sakshi Tatyaso Bhosale
//
//////////////////////////////////////////////////////////

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;
    //updater
    if(iFrequency < 0)
    {
        iFrequency = -iFrequency;
    }
    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d",iNo);
    }
}
int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    printf("Enter Frequency:");
    scanf("%d",&iCount);

    Display(iValue, iCount);

    return 0;
    
}