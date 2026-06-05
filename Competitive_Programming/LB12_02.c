// write a program which accept number from user and check whether it contains 0 in it or not 

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckZero(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit =iNo % 10 ;

        if(iDigit == 0)
        {
            return TRUE ;
        }
        iNo = iNo / 10 ;
    }
    return FALSE;
    
}

int main()
{
    int iValue = 0;
    bool bRet = FALSE;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    bRet = CheckZero(iValue);

    if(bRet == TRUE)
    {
        printf("It Contains Zero");
    }
    else
    {
        printf("There Is No Zero");
    }

    return 0 ;
}
