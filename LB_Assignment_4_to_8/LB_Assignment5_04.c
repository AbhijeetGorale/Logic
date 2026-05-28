#include<stdio.h>

void OddDiplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        if(iCnt % 2  != 0)
        {
            printf("%d",iCnt);
        }
    }
}

int main()
{
    int iValue= 0;
    
    printf("Enter Number\n");
    scanf("%d",&iValue);

    OddDiplay(iValue);

    return 0 ;
}