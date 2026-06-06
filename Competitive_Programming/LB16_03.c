//  accept N number from user and return Diffrence Between Largest And Smallest Number
// N - 6 
// Elements - 85 66 3 66 93 88
// output - 90 (93-3)

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

int Diffrence(int Arr[], int iLength)
{
    int iCnt = 0 ;
    int iMax = 0 ;
    int iMin = 0;

    iMin = Arr[0];
     
    for(iCnt = 0 ; iCnt < iLength ;iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
        
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    } 
    return iMax - iMin ;   
    
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

    iRet = Diffrence(p,iSize);

    printf("Diffrence between largest and smallest Number is :%d",iRet);

    free(p);
    

    return 0 ;
}