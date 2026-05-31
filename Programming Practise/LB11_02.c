// write a program which accept Range from User and Display all even Numbers in Between that Range

#include<stdio.h>

void RangeDisplayEven(int iStart, int iEnd)
{
    int i = 0 ;
    for(i = iStart ; i<= iEnd ; i++)
    {
        if(i % 2 == 0)
        {
            printf("%d\n",i);
        }
        
    }
}

int main()
{

    int iValue1 = 0;
    int iValue2 = 0 ;

    printf("Enter Starting Point :\n");
    scanf("%d",&iValue1);

    printf("Enter Ending Point :\n");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1,iValue2);

    return 0 ;
}