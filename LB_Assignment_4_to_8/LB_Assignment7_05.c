#include<stdio.h>

int FactorialDiff(int iNo)
{
    int i  ;
    int iEvenFact = 1;
    int iOddFact = 1;

    if( iNo < 0)
    {
        iNo = -iNo ;
    }
    for(i = 1; i <= iNo ; i++)
    {
        if((i % 2) == 0)
        {
            iEvenFact = iEvenFact * i ;
        
        }
        else
        {
            iOddFact = iOddFact * i ;
        }
    }
    return iEvenFact - iOddFact ;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial Diffrence is %d",iRet);

    return 0 ;
}