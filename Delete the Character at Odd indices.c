#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[50];
    gets(str);
    char ltr[30];
    int k=0;
    for(int i=0; i<strlen(str); i++)
    {
        if(i%2==0)
            ltr[k++]=str[i];
    }
    ltr[k]='\0';
    printf("%s", ltr);
}
