#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function name : CheckAdmission
//  Input         : Integers
//  Output        : Nothing (void)
//  Description   : Check student is eligible for admission if student marks are at least 60 and age is at least 17 years
//  Date          : 25/10/2026
//  Author        : Sakshi Tatyaso Bhosale
//
//////////////////////////////////////////////////////////

void CheckAdmission(float fMarks ,int iAge)
{
    if(fMarks >= 60 && iAge >=17)
    {
        printf("Eligible for Admiddion");
    }
    else
    {
        printf("Not Eligible for Admiddion");
    }
    
}

int main()
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter Marks and Age: ");
    scanf("%f %d",&fMarks,&iAge);

    CheckAdmission(fMarks,iAge);

    return EXIT_SUCCESS;
}