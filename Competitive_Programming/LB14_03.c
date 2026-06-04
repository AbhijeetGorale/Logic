//accept n number from user check weather that number contains 11 in it or not
// n - 6
// elements - 85 66 1 80 93 88
// output - 11 is present 

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0 

typedef int BOOL;

BOOL Check(int Arr[],int iLength)
{
    int iCnt = 0 ;
    
    while(iCnt < iLength )
    {
        if(Arr[iCnt] == 11)
        {
            return TRUE;
        }
        iCnt++ ;
    }
    return FALSE;
}

int main()
{
    int iSize = 0,iRet = 0 , iCnt = 0 ;
    int *p = NULL;
    BOOL bRet = FALSE;

    printf("Enter Numbber of elements :");
    scanf("%d",&iSize);

    p =(int *)malloc(iSize *sizeof(int));

    if(p == NULL)
    {
        printf("unable to allocate the memory");
        return - 1 ;
    
    }

    printf("Enter %d Elements",iSize);



    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        printf("enter elements : %d :",iCnt+ 1);
        scanf("%d",&p[iCnt]);
    }
    bRet = Check(p,iSize);

    if( bRet == TRUE)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is not absent"); 
    }
    free(p);

    return 0 ;
}