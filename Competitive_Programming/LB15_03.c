// accept N number from user and accept one another number as NO return index of last occurence of that number
// N - 6
// NO - 66
// Elements - 85 66 3 66 93 88
// output - 3


#include<stdio.h>
#include<stdlib.h>


int LastOcc(int Arr[],int iLength,int iNo)
{
    
    int iOcc = -1;
    int iCnt = 0 ;

    
    for(iCnt = iLength-1  ; iCnt >= 0 ; iCnt--)
    {


        if(Arr[iCnt] == iNo)
        {
            iOcc = iCnt ;
            break;
        }
    
    }
    return iOcc ;
}

int main()
{
    int iSize = 0 ,iRet = 0 , iCnt = 0 ,iValue = 0;
    int *p =NULL;

    printf("Enter number of elements :");
    scanf("%d",&iSize);

    
    
    p = (int *)malloc(iSize *sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate the memory");
        return - 1 ;
    }

    printf("Enter %d elemetns",iSize);

    for(iCnt = 0; iCnt <iSize ; iCnt++)
    {
        printf("enter elements %d:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    printf("Enter the number :");
    scanf("%d",&iValue);

    iRet = LastOcc(p,iSize,iValue);

    if(iRet == -1)
    {
        printf("There is no such number");
    }
    else
    {
        printf("Last occurance of number is %d",iRet);
    }

    free(p);

    return 0 ;
}