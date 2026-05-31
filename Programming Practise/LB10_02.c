// write a program which accept width and height of Rectangle from user and calculate its Area
// Area Of Rectangle = width * Height

#include<stdio.h>

double RectArea(float fWidth,float fHeight)
{
    double Area = 0.0 ;

    Area = fWidth * fHeight ;

    return Area ;
}

int main()
{
    float fValue1 = 0.0 ;
    float fValue2 = 0.0 ;
    double dRet = 0.0 ;

    printf("Enter Width Of Rectangle :\n");
    scanf("%f",&fValue1);

    printf("Enter Height Of Rectangle :\n");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);

    printf("Area of Rectangle is :%f\n",dRet);

    return 0 ;
}