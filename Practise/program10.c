/////////////////////////////////////////////////////////////////
//
// Include Required Header Files
//
/////////////////////////////////////////////////////////////////

#include<stdio.h>

//////////////////////////////////////////////////////////////////
// 
// Function Name : AddTwoNumbers
// Input :         Float,Float
// Output :        Float
// Description :   Performs Addition of Two  Floats
// Date :          08/05/2026
// Author :        Abhijeet Suresh Gorale
//
/////////////////////////////////////////////////////////////////

float AddTwoNumbers(
                    float fNo1 ,               // First Input
                    float fno2                // Second Input
                    )
{
    float fAns = 0.0f;                       // Variable To Store Result
    fAns =  fNo1 + fno2 ;                    // Perform Addition

    return fAns ;
}

/////////////////////////////////////////////////////////////////
//
// Application To Perform Addition Of Two Float Values
//
/////////////////////////////////////////////////////////////////
int main()
{
    float fValue1 = 0.0f;                    // To Store First Input
    float fValue2 = 0.0f;                    // To Store Second Value
    float fResult =0.0f;                     // To Store Result

    printf("Enter first Number :\n");
    scanf("%f",&fValue1);

    printf("Enter Second Number :\n");
    scanf("%f",&fValue2);

    fResult = AddTwoNumbers(fValue1 , fValue2); 

    printf("Addition is : %f\n",fResult);

    return 0;
}


/////////////////////////////////////////////////////////////////
//
// Input : 10.0 And 11.0
// Output : 21.0
//
////////////////////////////////////////////////////////////////