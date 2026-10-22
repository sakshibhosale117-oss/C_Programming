#include<stdio.h>
#include<ctype.h>

//////////////////////////////////////////////////////////
//
//  Function name : DisplayConvert
//  input         : Character
//  output        : Character
//  Description   : Performs Display Convert Character
//  date          : 22/10/2026
//  Author        : Sakshi Tatyaso Bhosale
//
//////////////////////////////////////////////////////////

void DisplayConvert(char CValue)
{
    if(islower(CValue))
    {
        printf("%c", toupper(CValue));
    }
    else if(isupper(CValue))
    {
        printf("%c", tolower(CValue));
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character\n");
    scanf(" %c", &cValue);

    DisplayConvert(cValue);

    return 0;
}