#include<stdio.h>

void Table(int iNo)
{
    int i =0 ;
    if( i < 0)
    {
        iNo = -iNo ;
    }
    for(i = 1 ; i <= 10; i++)
    {
        printf("%d\n",i*iNo);
    }
}

int main()
{
    int iValue = 0 ;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    Table(iValue);

    return 0 ;
}