// write a program which accept the Range from user and Display all Numbers in That Range in Reverse

#include<stdio.h>

void RangeDisplay(int iStart,int iEnd)
{
    int i = 0 ;

    if(iStart > iEnd)
    {
        printf("Invalid Range");
    }

    for(i = iEnd ; i>= iStart ; i--)
    {
        printf("%d\n",i);
    }
}

int main()
{
    int iValue1 = 0 ;
    int iValue2 = 0;

    printf("Enter Starting Point :\n");
    scanf("%d",&iValue1);
    
    printf("Enter Ending Point :\n");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1,iValue2);
    
    return 0 ;
}