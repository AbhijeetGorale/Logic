// write a program which accept range from user and return addition of all numbers in between that range

#include<stdio.h>

int RangeSum(int iStart,int iEnd)
{
    int i = 0 ;
    int iSum = 0 ;


    for(i = iStart ; i<= iEnd ; i++)
    {
        iSum = iSum + i ;
    }
    return iSum;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet =0 ;

    printf("Enter Starting Point \n");
    scanf("%d",&iValue1);

    printf("Enter Ending Point:\n");
    scanf("%d",&iValue2);

    iRet=RangeSum(iValue1,iValue2);

    printf("Addition is : \n%d",iRet);

    return 0;
}