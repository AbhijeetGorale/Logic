#include<stdio.h>

float AddTwoNumbers(float fNo1 ,float fno2)
{
    float fAns = 0.0f;
    fAns =  fNo1 + fno2 ;

    return fAns ;
}

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