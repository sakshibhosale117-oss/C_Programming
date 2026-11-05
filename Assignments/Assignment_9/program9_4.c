#include<stdio.h>

//////////////////////////////////////////////////////////
//
//  Function name : OddFactorial
//  Input         : Integers
//  Output        : Integers
//  Description   : Program to find odd factorial of given number
//  Date          : 5/11/2026
//  Author        : Sakshi Tatyaso Bhosale
//
//////////////////////////////////////////////////////////

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;     //updater
    }

    for(iCnt = 1; iCnt <= iNo; iCnt = iCnt + 2)
    {
        iFact = iFact * iCnt;
    
    }
    return iFact;
   
}

int main()
{
    int iValue = 0, iRet = 0;
    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("%d",iRet);

    return 0;
}

/*
------ OUTPUT -------
Enter number : 10
3840

------ LOGIC USED -----
for(iCnt = 2; iCnt <= iNo; iCnt = iCnt + 2)
iCnt = 2 → Start with the first even number.
iCnt = iCnt + 2 → Skip odd numbers.
iFact = iFact * iCnt → Multiply even numbers.
eg.  10 = 10 * 8 * 6 * 4 * 2  ==> 3840
*/
