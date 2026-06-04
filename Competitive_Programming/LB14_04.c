//accept n number from user and return frequency of 11 in it 
// n - 6 
// elements - 85 66 3 15 93 88
//output - 0

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength)
{
    int iCnt = 0 ;
    int iFreq = 0 ;
    
    while(iCnt < iLength )
    {
        if(Arr[iCnt] == 11)
        {
            iFreq++;
        }
        iCnt++;
    }
    return iFreq ;
    
}

int main()
{
    int iSize = 0,iRet = 0 , iCnt = 0 ;
    int *p = NULL;
    

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

    iRet = Frequency(p,iSize);

    printf("%d",iRet);


    free(p);

    return 0 ;
}