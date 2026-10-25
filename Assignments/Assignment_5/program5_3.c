#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function name : DisplayGrade
//  Input         : Float
//  Output        : Nothing (void)
//  Description   : Calculate Student Grade 
//  Date          : 25/10/2026
//  Author        : Sakshi Tatyaso Bhosale
//
//////////////////////////////////////////////////////////

void DisplayGrade(float fMarks)
{
    if(fMarks >=90 && fMarks <= 100)
    {
        printf("Grade A");
    }
    else if(fMarks >=75 && fMarks <= 89)
    {
        printf("Grade B");
    }
    else if(fMarks >=60 && fMarks <= 74)
    {
        printf("Grade C");
    }
    else if(fMarks >=40 && fMarks <= 59)
    {
        printf("Grade D");
    }
    else if(fMarks <= 40)
    {
        printf("Fail");
    }
    else
    {
        printf("Marks should be in range 0-100");
    }
}

int main()
{
    float fMarks = 0.0f;

    printf("Enter Marks: ");
    scanf("%f",&fMarks);

    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}