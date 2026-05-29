#include<stdio.h>

#include<stdio.h>

void TableRev(int iNo)
{
    int i =0 ;
    if( i < 0)
    {
        iNo = -iNo ;
    }
    for(i = 10 ; i >= 1; i--)
    {
        printf("%d\n",i*iNo);
    }
}

int main()
{
    int iValue = 0 ;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    TableRev(iValue);

    return 0 ;
}