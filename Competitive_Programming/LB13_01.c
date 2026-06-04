// Accept N number from user and return diffrence betweeen summation of EVEN elements and summation of ODD elements
// N = 6
// Elements = 85 66 3 80 93 88

#include<stdio.h>
#include<stdlib.h>

int Diffrence(int Arr[],int iLength)
{
    int iCnt = 0;
    int iSumEven = 0 ;
    int iSumOdd = 0;

    for(iCnt = 0 ; iCnt < iLength ;iCnt++)
    {
        if(Arr[iCnt] %2 == 0)
        {
            iSumEven = iSumEven +Arr[iCnt];
        }
        else
        {
            iSumOdd = iSumOdd + Arr[iCnt];
        }
        
    }
    return iSumEven - iSumOdd ;


}

int main()
{
    int iSize = 0 ,iCnt = 0, iRet = 0 ;
    int *p = NULL ;

    printf("Enter Number Of Elements\n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize *sizeof(int));

    if(p == NULL)
    {
        printf("Unable to Allocate Memory");
        return -1 ;
    }

    printf("enter %d elements :\n",iSize);

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    iRet = Diffrence(p,iSize);

    printf("Result is %d",iRet);

    free(p);

    return 0 ;
}