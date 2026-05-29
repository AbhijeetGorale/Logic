#include<stdio.h>

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("Small Number\n");
    }
    else if((iNo > 50) && (iNo < 100))
    {
        printf("Number Is Medium");
    }
    else
    {
        printf("Number is Large");
    }
}

int main()

{
    int iValue = 0 ;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    Number(iValue);

    return 0 ;
}