//write a program which accept number from user and find frequency of 4 in it//write a program which accept number from user and count frequency of 2 in it

#include<stdio.h>

int CountTwo(int iNo)
{
    int iDigit = 0 ;
    int iCnt = 0;
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 4)
        {
            iCnt++;
        }
        iNo = iNo / 10 ;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = CountTwo(iValue);

    printf("FOUR occures %d times",iRet);

    return 0 ;
}