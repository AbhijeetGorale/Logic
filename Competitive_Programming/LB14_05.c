// accept n number from user and accept one another number as NO , return frequency of NO from elements
// n - 6
// NO - 66
//elements - 85 66 3 66 93 88
//output - 2

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr [],int iLength,int iNo)
{
    int iCnt = 0 ;
    int iFreq = 0 ;
    
    while(iCnt < iLength )
    {
        if(Arr[iCnt] == iNo)
        {
            iFreq++;
        }
        iCnt++;
    }
    return iFreq ;
}

int main()
{
    int iSize = 0 ,iRet = 0 ,iCnt = 0 ,iValue = 0 ;
    int *p = NULL;

    printf("enter number of elements :");
    scanf("%d",&iSize);

    printf("enter the number :");
    scanf("%d",&iValue);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("unable to allocate the memory ");
        return -1 ;
    }

    printf("enter %d elements : \n",iSize);

    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        printf("Enter Elements %d : ",iCnt + 1);
        scanf("%d" ,&p[iCnt]);
    }

    iRet = Frequency(p,iSize,iValue);

    printf("%d",iRet);

    free(p);

    return 0 ;
}