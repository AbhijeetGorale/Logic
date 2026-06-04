//accept N number from user and return diffrence between frequency of even and odd number 
// input N - 7
// elements - 85 66 3 80 93 88 90 
// output 1(4 - 3)

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength)
{
    int iCntEven = 0 ;
    int iCntOdd = 0 ;
    int iCnt =0 ;

    for(iCnt = 0 ; iCnt < iLength;iCnt ++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iCntEven++;
        }
        else
        {
            iCntOdd++;
        }
        
    }
    return iCntEven - iCntOdd ;
    

}

int main()
{
    int iSize = 0 , iRet = 0 , iCnt = 0 ;
    int *p = NULL;

    printf("Enter number of Elements ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));


    if(p == NULL)
    {
        printf("unable to allocate the memory");
        return -1 ;
    }

    printf("Enter %d elements ",iSize);

    for(iCnt = 0 ; iCnt < iSize ; iCnt ++)
    {
        scanf("%d",&p[iCnt]);
    }

    iRet = Frequency(p,iSize);

    printf("%d",iRet);

    free(p);

    return 0 ;

}