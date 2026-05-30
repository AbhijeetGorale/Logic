// 1 KM = 1000 meter

#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iDist = 0 ;

    iDist = iNo * 1000 ;
    
    return iDist ;


}

int main()
{

    int iValue = 0 , iRet = 0 ;

    printf("Enter Distance In KM :");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in METER is : %d",iRet);



    return 0 ;
}
