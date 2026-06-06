// accept N number from user and Display Summation of Digit of each Elements
// n - 6 
// Elements - 8225 665 3 76 953 858
//output - 17 17 3 13 17 21

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

void DigitSum(int Arr[], int iLength)
{
    int iCnt = 0 ;
    int iRet= 0 ;
    int iSum = 0;
    
    for(iCnt =0; iCnt < iLength; iCnt++)
    {
        iRet = Arr[iCnt];
        iSum = 0;
        
        while(iRet > 0)
        {
            iSum = iSum +(iRet % 10);
            iRet=iRet / 10 ;
        }
        printf("%d ",iSum);
    }
    
}


int main()
{
    int iSize = 0 , iRet = 0 ,iCnt = 0 ; 
    int *p =NULL;

    printf("enter the number of elements :\n");
    scanf("%d",&iSize);


    p = (int *)malloc(iSize * sizeof(int));
    
    if(p == NULL)
    {
        printf("Unable to allocate the memory");
        return - 1;
    }

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        printf("Enter the elements %d :", iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    DigitSum(p,iSize);


    free(p);
    

    return 0 ;
}