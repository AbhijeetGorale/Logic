//Write a program which will accept  Radius from user and calculate its area
// PI = 3.14
//Area = 3.14 * Radius * radius

#include<stdio.h>

double CircleArea(float fRadius)
{
    float Pi = 3.14;
    double Area = 0.0 ;

    Area = Pi * fRadius * fRadius ;

    return Area ;
}

int main()
{
    float fValue = 0.0 ;
    double dRet = 0.0 ;

    printf("Enter Radius \n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle is :%f\n",dRet);

    return 0 ;
}