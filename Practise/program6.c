/*------------------------------------
            Algorith
--------------------------------------
    START
        Accept First Number As NO1
        Accept Second Number As NO2
        Performed Addition Of No1 And No2
        Display The Result
    STOP

*/

#include<stdio.h>

int main()
{
    float i = 0.0f,j = 0.0f,k =0.0f;   //  Variable Creation With Default Values

    printf("Enter First Number :\n");
    scanf("%f",&i);

    printf("Enter Second Number :\n");
    scanf("%f",&j);

    
    k = i + j ;

    printf("Addition is : %f\n",k);



    return 0;
}