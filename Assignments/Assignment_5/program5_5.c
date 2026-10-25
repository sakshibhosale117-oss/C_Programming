#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function name : CheckCharacterType
//  Input         : Character
//  Output        : Nothing (void)
//  Description   : Accept single character and determine if it is Uppercase,Lowercase,Digit or spacial character without using inbuilt library
//  Date          : 25/10/2026
//  Author        : Sakshi Tatyaso Bhosale
//
//////////////////////////////////////////////////////////

void CheckCharacterType(char cValue)
{
    if((cValue >='A') && (cValue <='Z'))
    {
        printf("UpperCase Alphabet");
    }
    else if((cValue >='a') && (cValue <='z'))
    {
        printf("LowerCase Alphabet");
    }
    else if((cValue >='0') && (cValue <='9'))
    {
        printf("Digits");
    }
    else
    {
        printf("Special character");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter a character: ");
    scanf("%c",&cValue);

    CheckCharacterType(cValue);

    return EXIT_SUCCESS;
}