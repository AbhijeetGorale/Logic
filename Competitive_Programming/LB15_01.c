// accept n number from user and accept one another number as NO check wheather NO is present or not
// N - 6
// NO -66
// Elements - 85 66 3 66 93 88 
//OUTPUT - TRUE

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0 

typedef int BOOL ;

BOOL Check(int Arr[],int iLength ,int iNo)
{
    int iCnt = 0 ;
    int iFreq = 0 ;
    
    while(iCnt < iLength )
    {
        if(Arr[iCnt] == iNo)
        {
            return TRUE ;
        }
        iCnt++;
    }
    return FALSE ;
}

int main()
{
    int iSize = 0 , iRet = 0 , iCnt = 0 ,iValue = 0;
    int *p = NULL;
    BOOL bRet = FALSE;

    printf("Enter number of elements :");
    scanf("%d",&iSize);

    printf("Enter Number :");
    scanf("%d",&iValue);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("unable to allocate the memory ");
        return - 1 ;
    }

    for(iCnt = 0 ; iCnt < iSize; iCnt++)
    {
        printf("Enter elements %d :",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    bRet = Check(p,iSize,iValue);

    if(bRet == TRUE)
    {
        printf("NUMBER IS PRESENT");
    }
    else
    {
        printf("NUMBER IS NOT PRESENT");
    }

    free(p);

    return 0 ;
}