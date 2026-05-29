#include<stdio.h>

void Display(int iNo)
{
    if(iNo == 0)
    {
        printf("Number Is Zero\n");
    }
    else if(iNo == 1)
    {
        printf("Number Is ONE\n");
    }
    else if(iNo == 2)
    {
        printf("Number Is TWO\n");
    }
    else if(iNo == 3)
    {
        printf("Number Is THREE\n");
    }
    else if(iNo == 4)
    {
        printf("Number Is FOUR\n");
    }
    else if(iNo == 5)
    {
        printf("Number Is FIVE\n");
    }
    else if(iNo == 6)
    {
        printf("Number Is SIX\n");
    }
    else if(iNo == 7)
    {
        printf("Number Is SEVEN\n");
    }
    else if(iNo == 8)
    {
        printf("Number Is EIGHT\n");
    }
    else if(iNo == 9)
    {
        printf("Number Is NINE\n");
    }
    else if (iNo == 10)
    {
        printf("Number Is TEN\n");
    }
    else
    {
        printf("Invalid Number");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    Display(iValue);


    return 0 ;
}