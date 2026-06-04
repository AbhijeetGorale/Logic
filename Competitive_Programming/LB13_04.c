//accept n number from user and display all such elemeents which are divisible by 3 and 5
// N - 6
// input - 85 66 3 15 93 88
// output - 15

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
    int iCnt= 0 ;

    for(iCnt = 0 ; iCnt < iLength ;iCnt++)
    {
        if(Arr[iCnt] %5 == 0 && Arr[iCnt] % 3 == 0)
        {
            printf("Number Divisible by 5  and 3 is : %d ", Arr[iCnt]);
        }
       
    }
}

int main()
{
    int iSize = 0 , iRet = 0 ,iCnt = 0 ;
    int *p = NULL ;

    printf("Enter number of Elements :\n");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize *sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate the memory");
        return - 1 ;
    }

    printf("Enter %d elements ",iSize);

    for(iCnt = 0 ; iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }
    Display(p,iSize);

    free(p);


    return 0 ;
}

