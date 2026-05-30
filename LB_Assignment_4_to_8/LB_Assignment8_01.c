//pI = 3.14
//Area Of Circle = PI * RADIUS * RADIUS

#include<stdio.h>

double CircleArea(float fRadius)
{
    float Pi = 3.14 ;
    double Area = 0.0 ;

    Area = Pi * fRadius * fRadius ;

    return Area ;

}

int main()
{
    float fValue = 0.0f ;
    double dRet = 0.0 ;

    printf("Enter Radius \n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle is :%lf",dRet);


    return 0;
}