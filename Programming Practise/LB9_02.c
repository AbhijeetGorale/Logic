//  Write a program which Accept number from user and return a count of odd Digit

 

#include<stdio.h>

int CountOdd(int iNo)
{
    int iDigit = 0;
    int iCnt =0 ;
    
    if(iNo < 0)
    {
        iNo = -iNo ;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10 ;
    
        if(iDigit % 2 != 0)
        {
            iCnt++;
        }
        iNo = iNo / 10 ;

    }

    return iCnt ;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("ENter Number\n");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);

    printf("%d",iRet);

    return 0 ;
}