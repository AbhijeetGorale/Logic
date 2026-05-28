#include<stdio.h>

void Pattern(int iNo)
{
    int i = 0 ;
    for(i = 1 ; i <= iNo ; i ++)
    {
        printf("$\t *\t");
    }
}
int main()
{
    int iValue = 0 ;

    printf("Enter Number \n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0 ;


}