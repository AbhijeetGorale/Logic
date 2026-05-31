// write a program which will accept distance in KM and return it into METER
// 1KM = 1000 meter

#include<stdio.h>

int KMtoMeeter(int iNo)
{
    int iMeter = 1000;
    int Dist = 0 ;

    Dist = iNo * iMeter ;

    return Dist ;
}

int main()
{
    int iValue = 0 ;
    int iRet = 0 ;

    printf("Enter Distance in KM :\n");
    scanf("%d",&iValue);

    iRet = KMtoMeeter(iValue);

    printf("Distance in METER is :\n%d",iRet);

    return 0 ;
}