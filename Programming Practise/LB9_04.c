// write a program which accept number and return multiplication of all the Digits

#include<stdio.h>

int MultDigit(int iNo)
{
    int iDigit = 0;
    int iMult =1;
        
            while (iNo != 0)
            {
                
                iDigit = iNo % 10 ;
                if(iDigit != 0)
                {
                    iMult = iMult  * iDigit;
                }

                iNo = iNo / 10;
                 
            }
            return iMult;

}

int main()
{
    int iValue = 0;
    int iRet = 0 ;

    printf("Enter Number \n");
    scanf("%d",&iValue);

    iRet = MultDigit(iValue);

    printf(" multiplication of Digits is %d",iRet);

    return 0 ;
}