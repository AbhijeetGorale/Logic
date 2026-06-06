// Accept N number from user and return Largest One
// N - 6 
// Elements - 88 90 5 44 93 88
//output - 93

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

int Maximum(int Arr[], int iLength)
{
    int iCnt = 0 ; 
    int iMax = 0;

    iMax = Arr[0];
     
    for(iCnt = 0 ; iCnt < iLength ;iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }  
    }    
    return iMax;
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

    iRet = Maximum(p,iSize);

    printf("Largest Number is :%d",iRet);

    free(p);
    

    return 0 ;
}