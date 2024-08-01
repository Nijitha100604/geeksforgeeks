#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[50];
    gets(str);
    int lower =0, upper=0, digit = 0, sc =0;
    for(int i=0; i<strlen(str); i++)
    {
        if(islower(str[i])!=0)
            lower++;
        else if(isupper(str[i])!=0)
            upper++;
        else if(isdigit(str[i])!=0)
            digit++;
        else
            sc++;
    }
    printf("%d\n%d\n%d\n%d", upper,lower,digit,sc);
}
