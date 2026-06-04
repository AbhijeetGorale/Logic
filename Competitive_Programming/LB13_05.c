//accept N number from user and Display all suc elements which are multiple of 11
// N - 6
//  input - 85 66 3 55 93 88
//ouput - 66 55 88 
#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
    int iCnt= 0 ;

    for(iCnt = 0 ; iCnt < iLength ;iCnt++)
    {
        if(Arr[iCnt] % 11 == 0)
        {
            printf(" %d ", Arr[iCnt]);
        }
    }
}
int main()
{
    int iSize = 0 , iRet = 0 , iCnt = 0 ;
    int *p = NULL;

    printf("Enter Number of elements :\n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize *sizeof(int));

    if(p == NULL)
    {
        printf("Unabale to allocate the memory");
        return - 1 ;
    }

    printf("Enter %d elements ",iSize);

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    Display(p,iCnt);

    free(p);

    return 0 ;
}