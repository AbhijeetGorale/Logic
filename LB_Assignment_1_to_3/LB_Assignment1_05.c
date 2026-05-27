#include<stdio.h>

void Accept(int iNo)
{
    int Icnt = 0;

    for(Icnt = 1 ;Icnt<=5;Icnt++)
    {
        printf("*\n");
    }
}

int main()
{
    int iValue = 0;
    iValue = 5;
    
    Accept(iValue);
    return 0 ;
}