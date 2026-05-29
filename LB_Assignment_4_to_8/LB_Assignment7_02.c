#include<stdio.h>

int DollerToINR(int iNo)
{
    int INR = 0;
    INR = iNo * 70 ;
    return INR;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number Of USD\n");
    scanf("%d",&iValue);

    iRet = DollerToINR(iValue);

    printf("Value in INR is %d",iRet);

    return 0 ;
}