#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function name : CheckTriangle
//  Input         : Three Integers
//  Output        : Nothing (void)
//  Description   : Check Triangle is valid or not 
//  Date          : 25/10/2026
//  Author        : Sakshi Tatyaso Bhosale
//
//////////////////////////////////////////////////////////

void CheckTriangle(int iSide1, int iSide2, int iSide3)
{
    if(iSide1 > 0 && iSide2 > 0 && iSide3 > 0 &&
    iSide1 + iSide2 > iSide3 && 
    iSide2 + iSide3 > iSide1 &&
    iSide3 + iSide1 > iSide2 )
    {
        printf("Valid Triangle");
    }
    else
    {
        printf("Invalid Triangle");
    }
}

int main()
{
    int iSide1 = 0, iSide2 = 0, iSide3 = 0;

    printf("Enter First number: ");
    scanf("%d",&iSide1);

    printf("Enter Second number: ");
    scanf("%d",&iSide2);

    printf("Enter Thirt number: ");
    scanf("%d",&iSide3);

    CheckTriangle(iSide1, iSide2, iSide3);

    return EXIT_SUCCESS;
}