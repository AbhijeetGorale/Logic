// write a program whcih accept area in square feet and conver it into sqyare meter
// 1 square feet = 0.0929 square meter

#include<stdio.h>

double SquareMeter(int iValue)
{
    double Area = 0.0 ;

    Area = iValue * 0.0929 ;

    return Area ;

}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter Area In Suare Feet :");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Area  in Square Meter is :%lf",dRet);

    return 0 ;
}