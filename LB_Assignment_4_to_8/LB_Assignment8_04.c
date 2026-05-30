// 1celsius (fehrenheit - 32)*(5/9)
// to Calculate fehrenheit into celsius

#include<stdio.h>

double FHtoCS(float fTemp)
{
    double FEH = 0.0 ;
    double celcius = 0.0;

    FEH = fTemp - 32 ;
    celcius =FEH * 0.5555;

    return celcius;
}

int main()
{
    float fValue  = 0.0f;
    double dRet = 0.0;

    printf("Enter Temprature in Fahrenheit :");
    scanf("%f",&fValue);

    dRet = FHtoCS(fValue);

    printf("Temprature in Celsius is :%lf",dRet);


    return 0 ;
}
