#include<stdio.h>

typedef int BOOL;
#define TRUE 1 
#define FALSE 0

BOOL ChkVowel(char Aplhabet)
{
    if(Aplhabet =='a' || Aplhabet =='e' || Aplhabet == 'i' || Aplhabet =='o' || Aplhabet == 'u' || Aplhabet =='A' || Aplhabet =='E' || Aplhabet == 'I' || Aplhabet =='O' || Aplhabet == 'U' )
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue ='\0';
    BOOL bRet = FALSE;

    printf("Enter Character\n");
    scanf("%c",&cValue);

    bRet =ChkVowel(cValue);
    if(bRet == TRUE  )
    {
        printf("Its vowel");
    }
    else
    {
        printf("its Not Vowel");
    }

    return 0;
}