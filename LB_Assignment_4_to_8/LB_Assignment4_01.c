#include<stdio.h>

int MultFact(int iNo)
{
    int iMult = 1;
    int i = 0 ;
    for(i = 1 ; i < iNo; i++)
    {
        if(iNo % i == 0)
        {
            iMult = iMult * i;
        }
    }

    return iMult;

}

int main()
{
    int iValue = 0 ;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("%d",iRet);

    return 0;
}