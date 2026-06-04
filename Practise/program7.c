#include<stdio.h>

int main()
{
    float fValue1 = 0.0f;                    // To Store First Input
    float fValue2 = 0.0f;                    // To Store Second Value
    float fResult =0.0f;                     // To Store Result

    printf("Enter first Number :\n");
    scanf("%f",&fValue1);

    printf("Enter Second Number :\n");
    scanf("%f",&fValue2);

    
    fResult = fValue1 + fValue2 ;            // Performed The Addition

    printf("Addition is : %f\n",fResult);

    return 0;
}