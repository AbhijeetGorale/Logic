//  write aa program which accept number from user and display its Digits in Reverse

#include<stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;
    if(iNo < 0)
    {
        iNo = -iNo ;
    }
    while(iNo >= 1)
    {
        iDigit = iNo % 10 ;   
        printf("%d",iDigit);
        iNo = iNo / 10 ;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return 0 ;
}
