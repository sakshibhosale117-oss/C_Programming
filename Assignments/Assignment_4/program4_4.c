#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function name : CheckVotingEligibility
//  Input         : Integer
//  Output        : Nothing (void)
//  Description   : Checks whether a person is eligible for voting based on age and displays Invalid for a negative age
//  Date          : 24/10/2026
//  Author        : Sakshi Tatyaso Bhosale
//
//////////////////////////////////////////////////////////

void CheckVotingEligibility(int iAge)
{
    if(iAge < 0)
    {
        printf("Invalid");
    }
    else if(iAge >= 18)
    {
        printf("Eligible for Voting");
    }
    else 
    {
        printf("Not Eligible for Voting");
    }
   
}

int main()
{
    int iAge = 0;

    printf("Enter a number: ");
    scanf("%d",&iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}