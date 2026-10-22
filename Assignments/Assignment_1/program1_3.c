#include<stdio.h>

//////////////////////////////////////////////////////////
//
//  Function name : Display
//  input         : -
//  output        : Integer
//  Description   : Print 5 to 1 numbers on screen
//  date          : 21/10/2026
//  Author        : Sakshi Tatyaso Bhosale
//
//////////////////////////////////////////////////////////

void Display()
{
    int i = 0;
    i = 5;

    while(i > 0)
    {
        printf("%d  ",i);
        i--;
    }
}
int main()
{
    Display();

    return 0;

}
